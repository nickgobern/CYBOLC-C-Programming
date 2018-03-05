#include <stdio.h>
#include <stdlib.h>

void printbits(void* base, size_t size)
{
    size_t pos;
    for(pos = (size*8)-1; pos > 0; pos--)
        printf("%c", ((*(unsigned long long*)base) & (1ull << pos))? '1':'0');
    printf("%c\n", ((*(unsigned long long*)base) & (1ull << pos))? '1':'0');
}

int main(void)
{
    for(unsigned int i = 0; i < 10; i++)
        printbits(&i, sizeof i);
    return 0;
}
