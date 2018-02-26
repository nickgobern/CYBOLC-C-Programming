#include<stdio.h>
#include "program.h"

int main(void)
{
  int n[100];
  init_array(&n[0]);

  int* end = (&n[0]+100);
  int* current = &n[0];
  int sum = 0;

  for(;current != end; current++)
  {
    /* Implement the body of this for loop such that, upon completion, sum contains the sum of all elements of array n. The sum should be accumulated with each iteration of the loop.
    */

	sum = *current + sum;
	
  }

  printf("%d\n",sum);
  return 0;
}+-
