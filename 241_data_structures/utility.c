#include<string.h>
#include<stdio.h>
#include<stdlib.h>
#include "pcap.h"

unsigned short in_checksum(unsigned short* addr, int len)
{
  int sum = 0;
  unsigned short answer = 0;
  unsigned short* w = addr;
  int nleft = len;

  while(nleft > 1)
  {
    sum += *w++;
    nleft -= 2;
  }

  if(nleft == 1)
  {
    *(unsigned char *)(&answer) = *(unsigned char*)w;
    sum += answer;
  }

  sum = (sum >> 16) + (sum & 0xffff);
  sum += (sum >> 16);
  answer = ~sum;
  return answer;
}

void write_pcap(char* filename, char* packet, size_t pktlen)
{
  size_t pcaplen =
    pktlen +
    sizeof(struct pcap_file_header) +
    sizeof(struct pcap_packet_header);

  char* pcap_record = (char*)malloc(pcaplen);
  if(pcap_record == NULL)
  {
    fprintf(stderr,"error: memory allocation failed\n");
    exit(EXIT_FAILURE);
  }

  struct pcap_file_header* file_header = (struct pcap_file_header*)(pcap_record);

  struct pcap_packet_header* packet_header = (struct pcap_packet_header*)(
    pcap_record +
    sizeof(struct pcap_file_header));

  memcpy(
    pcap_record +
    sizeof(struct pcap_file_header) +
    sizeof(struct pcap_packet_header),
    packet,pktlen);
  file_header->magic = 0xa1b2c3d4;
  file_header->linktype = 101;
  file_header->version_major = PCAP_VERSION_MAJOR;
  file_header->version_minor = PCAP_VERSION_MINOR;
  file_header->snaplen = 65535;
  packet_header->caplen = pktlen;
  packet_header->len = pktlen;

  FILE* fp = fopen(filename,"wb");
  if(fp == NULL)
  {
    fprintf(stderr,"error: cannot open %s for writing\n",filename);
    exit(EXIT_FAILURE);
  }
  fwrite(pcap_record,sizeof(char),pcaplen,fp);
  fclose(fp);
  free(pcap_record);
}
