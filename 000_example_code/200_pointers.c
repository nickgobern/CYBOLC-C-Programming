/*******************************************************************************
*  FILE NAME : 200_pointers.c
*  AUTHOR : Jason Enochs 
*  CREATION DATE : 15-May-2017
*  LAST MODIFIED : 15-May-2017
*  DESCRIPTION : 
*
*******************************************************************************/
#include<stdio.h>
#include<stdlib.h>

int main(void)
{
    // This works but its WRONG  See next example: 201_pointers.c
    int* ip;
    ip = malloc(5 * sizeof(int));
    return 0;
}
