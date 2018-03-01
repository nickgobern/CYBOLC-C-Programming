#include<stdio.h>
int main(void)
{
    int a0[10];
    int a1[] = {1,2,3,4,5,6,7,8,9,10};
    unsigned short a2[3] = {};

    int elementCount = sizeof(a1) / sizeof(a1[0]);
    for(int index = 0; index < elementCount; index++)
    {
        a0[index] = a1[index] * a1[index];
        printf("%d squared = %d\n",a1[index],a0[index]);
    }
    return 0;
}
