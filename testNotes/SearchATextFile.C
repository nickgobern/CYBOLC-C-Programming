#include<stdlib.h>
#include<stdio.h>
#include<string.h>

int myfunc(const char *path, const int lineNumber, char* buffer)
{
	/*
	printf("%s\n",path); tests to ensure file is being read in properly
	*/
	FILE* fp = fopen(path,"r");
	char *line = NULL;
	size_t len = 0;
	ssize_t read;
	const char *wordToSearch = "argv";

     while ((read =  getline(&line,&len,fp)) != -1 )
     {
        //printf("%s\n", line);
		
		if(strstr(line,"This") !=NULL)//searches for specific word
			printf("fuccboi\n");
		else
			printf("%s\n", line);

     }
 	
     fclose(fp);

//printf("%d",words[0]);
}

int main (void)
{
	myfunc("/home/usacys/testNotes/test.txt", 1,NULL);
	return 0;
}
