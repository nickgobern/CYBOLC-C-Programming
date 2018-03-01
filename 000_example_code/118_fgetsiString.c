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
    char name[64] = {'\0'};
    do
    {
    	printf("\nPlease enter a name: ");
    	if (fgets(name, sizeof(name), stdin)) 
    	{
            printf("\nYou entered %s\n", name);
    	}
    }while(name[0] == '\0' || name[0] == '\n');

    return 0;
}
