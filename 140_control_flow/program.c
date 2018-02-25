// There's a missing #include
#include <stdio.h>
#include <string.h>
#include "program.h"


// Don't alter the main function.  Modify the 'modify_me' function
int main(int argc, char *argv[])
{
    return modify_me(validate_input(argc, argv));
}

double modify_me(int x)
{
    /* Write a block of code below that meets the exercise requirements.
     * The user supplied input is the input parameter (x) to this function. */ 


	//If the number is a multiple of both 3 and 5, print fizzbuzz.
	if ((x%3)==0 && (x%5)==0)
	{
		printf("fizzbuzz\n");
	}

	//If the number is a multiple of 3, print out fizz.
	else if((x%3)==0)
	{
		printf("fizz\n");
	}

	//If the number is a multiple of 5, print buzz.
	else if((x%5)==0)
	{
		printf("buzz\n");
	}

	
	//If the number is not a multiple of either, simply print the number.
	else
	{
		printf("%d\n",x);
	}



   // Leave this return statement
   return 0;
}
