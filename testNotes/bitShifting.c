#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void printbits(void* base, size_t size);

int main(void)
{
	for(unsigned char i = 0; i < 10; i++)
		printbits(&i,sizeof i);
	return 0;
}


/*
converts chars to bits
*/
void printbits(void* base, size_t size)
{
    unsigned char *b = (unsigned char*) base;
    unsigned char byte;
    int i, j;

    for (i=size-1;i>=0;i--)
    {
        for (j=7;j>=0;j--)
        {
            byte = b[i] & (1<<j);
            byte >>= j;// bitwise shift right over to the left
            printf("%u", byte);
        }
    }
    printf("\n");
}


