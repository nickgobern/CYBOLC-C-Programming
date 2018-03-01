#include <stdio.h>

int main(void)
{
	char name[16] = { '\0' };
	int pos = 0;
	int c = 0;
	do
	{
		c = fgetc(stdin);
		if((pos < 15) && (c != '\n'))
			name[pos] = c;
		pos++;
	} while(c != '\n');
	printf("%s\n",name);

	return 0;
}
