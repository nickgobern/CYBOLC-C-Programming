#include<stdlib.h>
#include<stdio.h>
#include<string.h>

int myfunc(const char *path, const int lineNumber, char* buffer)
{
	/*
	printf("%s\n",path); tests to ensure file is being read in properly
	*/
	FILE* fp = fopen(path,"r");//read in file from given path

	if(!fp)// if file is null
		return -1
	
	int lineCounter  = 1;
	
	char myBuffer[1024];

	/*
	loop through the text until its empty
	*/
	while(fgets(myBuffer,sizeof(myBuffer), file)!=NULL)
	{	
		/*
		if you are on correct line number then use memset on GIVEN buffer
		otherwise increment
		*/
		if( lineCounter++ == lineNumber)
		{	//set to 0 and are told to use 64 bits
			memset(buffer,0, 64);
			
			//copy old buffer into new buffer at bits -1 to avoid NULL terminator
			strnpy(buffer, myBuffer, 63);
			
			//return the number of bytes placed into the buffer excluding null terminator  
			return strlen(buffer); 			
		}
	}
     fclose(fp);

	//if not found then return -1
	return -1;
}

int main (void)
{
	myfunc("/home/usacys/testNotes/test.txt", 1,NULL);
	return 0;
}
