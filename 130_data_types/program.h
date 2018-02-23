#include <stdlib.h>
#include <ctype.h>

long validate_input(int, char**);
double modify_me(int);
void usage(char*);

long validate_input(int argc, char* argv[])
{
    if(argc != 2 || !isdigit(*argv[1]))
    {
	usage(argv[0]);
	exit(1);
    }

    return strtol(argv[1],NULL,10);
}

void usage(char* filename)
{
    printf("\nUsage: %s <int>\n\n", filename);
}

