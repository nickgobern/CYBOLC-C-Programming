#include<stdio.h>
#include<stdlib.h>

int compare(const void* a, const void* b)//function to compare the numbers
{
    int* thingA = (int *)a;
    int* thingB = (int *)b; 	
    return (*thingA - *thingB);
    /*a-b = ascending	
	b-a = descending*/
}

int main(void)
{
	const int num_elem = 10;
	int elements[] = {2,6,1,9,8,2,0,5,7,4};

	/*
	qsort((array, size of array, size of each number (type of arrray), compare func to use
	*/
	qsort((void *)elements, num_elem,sizeof(int), &compare);
	

	/*
	prints out the final array
	*/
	for(int index = 0; index < 10; index++)
	{
	printf("%d\n",elements[index]);
	}

	return 0;
}




