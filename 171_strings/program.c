#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<time.h>
#include<ctype.h>


char rot13(char letter )
{
	char lowerLetters[26] = {'a','b','c','d','e','f','g','h',
				'i','j','k','l','m','n','o','p',
				'q','r','s','t','u','v','w','x',
				'y','z'};

	char upperLetters[26] = {'A','B','C','D','E','F','G',
				'H','I','J','K','L','M','N',
				'O','P','Q','R','S','T','U',
				'V','W','X','Y','Z'};

	for(int x = 0;x <=25; x++)
	{
		if(letter == lowerLetters[x])
		{
			letter = lowerLetters[(x+13)%26];
			break;
		}
		else if(letter == upperLetters[x])
		{		
			letter = upperLetters[(x+13)%26];
			break;
		}
		
	}
	
	return letter;
}

int main(void)
{
  srand((unsigned)time(NULL));
  char text[41] = { '\0' };
  int index;
  for(index = 0; index < 40; index++)
  {
    if( rand() % 2 ) // 0 or 1, uppercase or lowercase
      text[index] = rand() % 26 + 65; // uppercase
    else
      text[index] = rand() % 26 + 97; // lowercase

     printf("%c",text[index]);	  
  }
     printf("\n");

  /* Student implementation */
  for(index = 0; index < 40; index++)
  {	
	printf("%c",rot13(text[index]));
  }
	printf("\n");
  return 0;
}
