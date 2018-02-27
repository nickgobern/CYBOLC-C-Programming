#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include <limits.h>

int compare(const void* a, const void* b);

int main(void)
{
  int array[1024] = { 0 };

  /* Fill array with random numbers */
  srand((unsigned)time(NULL));

  int index;
  for(index = 0; index < 1024; index++)
    array[index] = rand() % 100;
  /* ------------------------------- */
  /* Student implementation */

   //sort(array[index],array[index-1]);
   int size = sizeof array/ sizeof *array;// gets size of

   qsort(array, size, sizeof(int),&compare);//sorts the array

  for(index = 0; index < 1024; index++)
  {
	printf("%d\n",array[index]);
  }

  return 0;
}


int compare(const void* a, const void* b)
{
  /* Student implementation */
    int* thingA = (int *)a;
    int* thingB = (int *)b; 	
    return (*thingB - *thingA);
}

