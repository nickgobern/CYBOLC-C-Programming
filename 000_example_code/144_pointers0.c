#include<stdio.h>

int main(void) 
{
    int n = 9;
    int i = 7;
    int* ptr = &n;
	
	printf("%d\n",*ptr);
	
	ptr = &i;
	printf("%d\n",*ptr);

	int array[] = {1,2,3,4,5};
	ptr = &array[0];
	for(int x = 0; x < 5; x++)
	{
		printf("array[%d]: %d\n",x,*(ptr+x));
	}
	    
    return 0;
}

