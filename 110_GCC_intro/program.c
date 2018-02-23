// There's a missing #include
#include <stdio.h>
#include <string.h>
#include "program.h"
#include <math.h>

// Don't alter the main function.  Modify the 'modify_me' function
int main(int argc, char *argv[])
{
    return modify_me(validate_input(argc, argv));
}

double modify_me(int x)
{

float sqrtX;



   /* Raise x to the 3rd power.  Utilize the power function from the standard 
    * math library (don't just multiply x by itself 3 times). Save the result
    * back into x (overwrite x)*/
	x = pow(x,3);
  
   /* Using the square root function from the standard math library, find the 
    * square root of x (after raising x to the 3rd power) and save the 
    * result into a new variable (do not overwrite x). */
	sqrtX = sqrt(x);

   /* Using the standard math library for rounding to the nearest int, round 
    * the square root you obtained in the last step to the nearest integer. 
    * Overwrite x with the result. For halfway cases round away from zero.*/
	x = round(sqrtX);


   // DO NOT REMOVE THIS 
   printf("\n%d\n\n",x);

   return 0;
}
