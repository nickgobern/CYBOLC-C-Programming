#include<stdio.h>
#include<stdlib.h>
int* foo(void)
{
	int* ptr = (int*)malloc(sizeof(int));
	*ptr = 7;
	return ptr;
}

void bar(void)
{
	printf("new stack frame!\n");
}

int main(void)
{
	int* returned_ptr = foo();
	bar();
	printf("%d\n",*returned_ptr);

	free(returned_ptr);
	return 0;
}
