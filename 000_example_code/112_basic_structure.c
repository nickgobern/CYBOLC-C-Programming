/**************************************************************************
*  FILE NAME : 00_1_main.c
*  AUTHOR : Jason Enochs 
*  CREATION DATE : 03-Aug-2016
*  LAST MODIFIED : 03-Aug-2017
*  DESCRIPTION : Prints "Hello World!" 
*                Explain:
*                	   declare and assign a value to an integer
*                	   print the integer using printf
**************************************************************************/

// Preprocessor commands
#include<stdio.h>


int main(void)
{
   int x;
   x = 12;
   printf("A dozen is %d\n", x);
   return 0;
}
