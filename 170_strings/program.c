#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<time.h>
int main(void)
{
  time_t t;
  srand((unsigned) time(&t));

  char* name = "Dennis Ritche";
  char* surname = "the Menace";
  char menace[25] = { '\0' };

  /* Using functions declared in string.h write code such
  that this program outputs "Dennis the Menace" followed
  by a random character. No modifications to the existing
  code are allowed.
  */
  /* Your code goes here */

 	//memcpy(char *name,const char *surname);
	memcpy(menace, name, 7);
	memcpy(menace + 7, surname,12);
  /***********************/

  menace[17] = rand() % 93 + 33;
  menace[18] = '\0';
  printf("%s\n",menace);
  return 0;
}
