/*******************************************************************************
*  FILE NAME : qsort_ex.c
*  AUTHOR : Jason Enochs 
*  CREATION DATE : 12-Feb-2018
*  LAST MODIFIED : 12-Feb-2018
*  DESCRIPTION : Example using qsort to sort an array
*
*******************************************************************************/
#include <stdio.h>
#include <stdlib.h>


int compare_int( const void* a, const void* b ) 
{ 
     if( *(int*)a == *(int*)b ) return 0;
     return *(int*)a < *(int*)b ? -1 : 1;
}  

int main(void)
{
    const size_t num_elem = 10;
    int elements[num_elem] = { 3, 6, 1, 9, 8, 2, 0, 5, 7, 4 };
    qsort( elements, num_elem, sizeof(int), compare_int );
}
