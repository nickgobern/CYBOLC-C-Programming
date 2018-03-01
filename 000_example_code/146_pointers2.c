#include<stdio.h>
int main(void)
{
	int n[10] = {1,2,3,4,5,6,7,8,9,10};
	for(int i = 10; i < 50; i++)
	{
		n[i] = 0;
		printf("wrote to n[%d]\n",i);
	}
	return 0;
}
