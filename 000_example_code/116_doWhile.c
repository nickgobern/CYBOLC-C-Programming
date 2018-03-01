/*******************************************************************************
*  FILE NAME : 113_forLoop.c
*  AUTHOR : Jason Enochs 
*  CREATION DATE : 10-May-2017
*  LAST MODIFIED : 03-Aug-2017
*  DESCRIPTION : Do while
*
*******************************************************************************/
#include<stdio.h>
#include<ctype.h>

int main(void)
{
    char letter = 'x';
    char hold = 'x';
    do
    {
	    printf("\nPlease select a, b, or c: ");
	    scanf("%c", &letter);
	    while ((hold = getchar()) != '\n' && hold != EOF) {}
            letter = tolower(letter);	
	    printf("\nYou entered %c\n", letter);
    }while(letter != 'a' && letter != 'b' && letter != 'c');
    return 0;
}
