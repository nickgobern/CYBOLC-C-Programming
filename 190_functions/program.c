#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<time.h>

/* Purpose: Push a character onto the stack

  Parameters:
    stack:  stack element storage array
    top:    index of the top of the stack
    c:      character to be push onto the stack
*/
void push(char* stack, int* top, char c)
{
  //#pragma message "requires an implementation"
	stack[(*top)] = c;
	(*top)++;	
	
	
}

/* Purpose: Pop an element off the stack

  Parameters:
    stack:  stack element storage array
    top:    index of the top of the stack

  Returns:  character at the top of the stack
*/
char pop(char* stack, int* top)
{
  //#pragma message "requires an implementation"
	(*top)--; 
 return stack[*top];
}

/* Purpose: Pops all characters off a stack and stores them in a string

  Parameters:
    stack:        stack element storage array
    top:          index of the top of the stack
    destination:  string into which characters will be copied
*/
void pop_string(char* stack, int* top, char* destination)
{
  int stringIndex = 0;
  while((*top) != 0)
  {
    destination[stringIndex] = pop(stack,top);
    stringIndex++;
  }
  destination[stringIndex] = '\0';
}

int main(void)
{
  time_t t;
  srand((unsigned) time(&t));

  char stack[64]; // storage area for stack elements
  int top = 0;    // index of the "top" of the stack

  // push a random number (10-60) of random characters onto the stack
  int count = rand() % 50 + 10;
  while(count > 0)
  {
    push(stack,&top,rand() % 93 + 33);
    count--;
  }

  // pop and print the entire contents of the stack as a string
  char buffer[64];
  pop_string(stack,&top,buffer);
  printf("%s\n",buffer);
  return 0;
}
