#include <stdio.h>
#include<stdlib.h>
#include<string.h>

void printbits(void* base, size_t size);

int main(void)
{
	for(unsigned char i = 0; i < 10; i++)
		printbits(&i,sizeof i);
	return 0;
}

void printbits(void* base, size_t size)
{
	char buffer[size];//size of array is passed in
	itoa(base,buffer,2);//2 means binary
	printf("Binary value = %s\n", buffer);
}
