// reads stdin, prints converted long
#include <stdio.h>
#include <stdlib.h>
int main(int args, char** argv)
{
    char buffer[80];
    char* end = NULL;
    while(fgets(&buffer[0],sizeof(buffer),stdin) != NULL)
    {
        long converted = strtol(&buffer[0],&end,10);

        if(converted == 0 && (end == &buffer[0]))
        {
            fprintf(stderr,"conversion failed\n");
            exit(EXIT_FAILURE);
        }

        printf("%ld\n",converted);
    }
    return 0;
}

