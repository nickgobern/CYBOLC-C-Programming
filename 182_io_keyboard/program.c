#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>
#include<math.h>


int my_isalpha(char* string)
{
    /*
    if(!isdigit(string[0]))
	{
		return 1; 
	} 
    */
 
    for(int i = 0; i < strlen(string); i++)
    {
	if(isdigit(string[i]))
	{
		return 0; 
	} 
    }
  return 1;
}

int main(void)
{
	char response [100];
	
	printf("I’ve spun your straw into gold now guess my name (enter only letters): \n");

	do
	{
		if(fgets(response, 16, stdin)!= NULL)// ask the user fo text and allow any combination
		{
			if(my_isalpha(response))//checks if it is a number
			{
		
				if(strcasecmp (response,"Rumpelstiltskin") == 0)// if name is Rumpelstiltskin, then print out who told you
				{
					printf("Who told you!\n");
					break;
				}
		
				else //otherwise tell them to try again
				{
					printf("Wrong, try again\n");
				}
			}

			else
			{
				printf("Invalid input, try again!\n");

			}
		}

		else
		{
			return(EXIT_FAILURE);
		}

	}while(1<2);
	return(EXIT_SUCCESS);
}

