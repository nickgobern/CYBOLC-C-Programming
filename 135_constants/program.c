#include <stdio.h>
#include <stdlib.h>
#include "program.h"
//#define DEBUG
//#define PT
//#define GOLD
// Don't alter the main function.  Modify the 'modify_me' function
int main(void)
{
    return modify_me();
}

int modify_me()
{
    system("clear"); // clear screen [optional]
   

    // YOUR CODE HERE
#ifdef PT

	printf("Name: Platinum\nSymbol: pt\nAtomic number: 78");


#endif

#ifdef AU

        printf("Name: Gold\nSymbol: au\nAtomic number: 79");


#endif
    
#ifdef AG

        printf("Name: Silver\nSymbol: ag\nAtomic number: 47");


#endif

    return 0; // don't change this
}
