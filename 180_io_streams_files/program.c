#include<stdio.h>
#include<stdlib.h>
#include<string.h>


int main(void)
{
FILE* p = fopen("sshd_config", "r");
//"fopen" function opens a specified file.
//"p" points to the file ("ssh_congif") being read from.
 char str[100];//array where the output read will be stored. 100 is the character limit per line.
		
	//fgets function actually does the reading (by line) from the file that "p" is pointing to.
	while (fgets(str, 100, p) != NULL) 
	{
		char *strchecker = "\n";//variable to compare befor printing
		char *strchecker2 = "#";//variable to compare before printing

		//"strncpy" function compares two variables.
		//if the line does not begin with a "#" and is not blank line.		
		if ( strncmp(str, strchecker2, 1) && strncmp(str, strchecker, 1) )
		{
		printf("%s",str);//print it out
		}
	}
fclose(p);
return 0;
}
