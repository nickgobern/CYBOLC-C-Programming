#include<stdio.h>
int main(void)
{
    char string0[] = {'H','e','l','l','o'};
    char string1[] = "Hello";

    printf("sizeof char array: %d\n",sizeof(string0));
    printf("sizeof string    : %d\n",sizeof(string1));
    
    string0[4] = '\0';
    printf("%s\n",string0);
    return 0;
}
