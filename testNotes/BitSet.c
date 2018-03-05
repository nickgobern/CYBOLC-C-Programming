#include<stdlib.h>
#include<stdio.h>
#include<string.h>

/*
ensure the most significant bit (0x8000000) is set to 1 in var else set bit 0x4 in returnVale
*/

int main()
{

unsigned int returnValue = 0;
int var = 0;

if((var&0x8000000) == 0)		//how to check a bit
	returnValue |= 0x4;		//how to set a bit

/*
if
(var&mask==mask) then the bit is set (==1)
*/
}
