/*******************************************************************************
*  FILE NAME : 117_fgets.c
*  AUTHOR : Jason Enochs 
*  CREATION DATE : 10-May-2017
*  LAST MODIFIED : 03-Aug-2017
*  DESCRIPTION : 
*
*******************************************************************************/
#include<stdio.h>
#include<ctype.h>

int main(void)
{
    char line[256];
    char i = '5';
    do
    {
    	printf("\nPlease enter a character: ");
    	if (fgets(line, sizeof(line), stdin)) 
    	{
            if (1 == sscanf(line, "%c", &i)) 
	    {
                printf("\nYou entered %c\n", i);
            }
    	}
    }while(!isalpha(i));

    return 0;
}
