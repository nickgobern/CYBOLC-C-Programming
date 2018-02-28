#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<time.h>
#include<linux/ip.h>
#include<linux/icmp.h>
#include<arpa/inet.h>
#include<netinet/in.h>
#include"pcap.h"

int main(void)
{
  /* Allocate a buffer large enough to hold IP and ICMP header */
	char* packet = (char*)malloc(sizeof(struct iphdr) + sizeof(struct icmphdr));


  /* Declare pointers to appropriately offset IP and ICMP headers */
	struct iphdr* ip = (struct iphdr*)packet;// creates struct header named ip( assign stuct with ->)
	struct icmphdr* icmp = (struct icmphdr*)(packet + sizeof(struct iphdr));
  /* Populate the headers with data */
	ip->ihl = 5; //number found by dividing 20 byte header by 4
	ip->version = 4; //version found in ip.h
	ip->tos=16; //asigns type of service
	ip->tot_len=sizeof(struct icmphdr)+ sizeof(struct iphdr); //assigns totalength by adding ip header and icmp header
	ip->id = 1; //assigns identification
	ip->frag_off = 1;// assigns fragment offset
	ip->ttl = 5;// assigns time to live
	ip->protocol = 1; //assigns which protocol to use and uses icmp
	ip->check = in_checksum((unsigned short*) ip, sizeof(struct iphdr));// assigns header checksum
	ip->saddr = inet_addr("192.168.10.10");//assigns source address
	ip->daddr = inet_addr("192.168.10.255");// assigns destination address



	icmp->checksum = in_checksum((unsigned short*) ip, sizeof(struct icmphdr));// assigns header checksum
	icmp->type =  8;//generates echo request


  /* Write the buffer to file using write_pcap() */
	//void write_pcap(char* filename, char* packet, size_t pktlen);
	write_pcap("packet", packet, sizeof(struct iphdr)+ sizeof(struct icmphdr));
  /* Free dynamic memory */
  	free(packet);
  return EXIT_SUCCESS;
}
