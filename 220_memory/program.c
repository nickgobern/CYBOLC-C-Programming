#define _GNU_SOURCE
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
   FILE *stream;
   char *line = NULL;
   size_t len = 0;
   ssize_t nread;
   int dictSize = 99171;
   char* dictionary[dictSize]; 

   int index = 0;
  	

   stream = fopen("/usr/share/dict/words", "r");

   while ((nread = getline(&line, &len, stream)) != -1) 
   {
       dictionary[index] = (char*)calloc(8,sizeof(char));// allocate memory for dictioary array
       strncpy(dictionary[index],line,strlen(line)-1);//copy data to new array
       index++;

   }

   for(int i = 0; i < dictSize; i++)
	{
	for(int j = 0; j < dictSize; j++)
	    {
		printf("Bob \n%s%s\n",dictionary[i],dictionary[j]);
	    }
	
	}

   fclose(stream);
   exit(EXIT_SUCCESS);
   return 0;
}


