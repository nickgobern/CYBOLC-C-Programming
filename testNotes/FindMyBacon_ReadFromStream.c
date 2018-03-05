#include<stdlib.h>
#include<stdio.h>
#include<string.h>


int myFunc()
{
	char buffer[1024];					//creates buffer greater than required
	fgets(buffer,sizeof(buffer),stdin); 	//takes in user input
	buffer[strcspn(buffer,"\n")] = '\0';	//removes extra new lines from user input
									//may want to add +1 after \n then remove \n from below
	
	/*
	if the word bacon is in the buffer then output an error
	*/
	if(strstr(buffer,"Bacon ") == buffer)	//checks if word is in buffer and returns pointer to where it found it which would be buffer
	{	
		fprintf(stderr,"%s\n", buffer);	//outputs a standard error
	}	
	/*
	if bacon is not in the word then output the word
	*/
	else
	{
		fprintf(stdout,"%s\n",buffer);
	}
	//return 0 from the function
	return 0;


}

int main(void)
{
	myFunc();
}
