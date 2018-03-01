/*******************************************************************************
*  FILE NAME : 113_forLoop.c
*  AUTHOR : Jason Enochs 
*  CREATION DATE : 10-May-2017
*  LAST MODIFIED : 03-Aug-2017
*  DESCRIPTION : Do while:  Why doesn't this work correctly?
*
*******************************************************************************/
#include<stdio.h>

int main(void)
{
    char letter = 'x';
    do
    {
	    printf("\nPlease select the letter a: ");
	    scanf("%c", &letter);
	    printf("\nYou entered %c\n", letter);
    }while(letter != 'a');

    return 0;
}
