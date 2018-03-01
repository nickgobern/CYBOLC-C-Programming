/*******************************************************************************
*  FILE NAME : getopt_ex.c
*  AUTHOR : Jason Enochs 
*  CREATION DATE : 12-Feb-2018
*  LAST MODIFIED : 12-Feb-2018
*  DESCRIPTION : getopt example 
*
*******************************************************************************/
#include <stdio.h>
#include <getopt.h>
#include <stdlib.h>

 int main(int argc, char *argv[])
 {
    if (argc < 4)
    { 
      return -1;
    }
    int c;
    int opt = 0;
    while ( ( c = getopt(argc, argv, "asmd") ) != -1 )
    { 
      switch (c)
      {
        case 'a':
          opt = 1;
          break;
        case 's':
          opt = 2;
          break;
        case 'm':
          opt = 3;
          break;
        case 'd':
          opt = 4;
          break;
        default:
          break;
      }
    }
  
    int num1 = atoi(argv[optind]);
    int num2 = atoi(argv[optind+1]);
    switch(opt)
    {
      case 1:
         printf("%d\n", (num1 + num2));
         break;
      case 2:
         printf("%d\n", (num1 - num2));
         break;
      case 3:
         printf("%d\n", (num1 * num2));
         break;
      case 4:
         if (num2 == 0)
         {
           printf("NAN\n");
         }
         else
         {
           printf("%d\n", (num1 / num2));
         }
         break;
    }
    return 0;
}


