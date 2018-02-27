#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>
#include<math.h>
#include<argp.h>
#include<unistd.h>


//int global variables



int check_argument(int brokenFlag)//checks to see if there was an argument attached to the flag
{	
	/*getopt encounters an unknown option character or an option with a missing required argument, it stores that option character in this variable*/

	if (brokenFlag == 'f'|| brokenFlag == 'n'|| brokenFlag == 'l')
		fprintf (stderr, "Option -%c requires an argument.\n", brokenFlag);
	else if (isprint (brokenFlag))
		fprintf (stderr, "Unknown option `-%c'.\n", brokenFlag);
	else
		fprintf (stderr,"Unknown option character `\\x%x'.\n",brokenFlag);
	
	return 0;


}


int main(int argc, char **argv)
{
	/*put all flags in start postion*/
	char* fFlag = NULL;
	char* nFlag = NULL;
	char* lFlag = NULL;
	int index;
	int flag;
	opterr = 0;// when set to zero getopt prints '?' to indicate errors

	while((flag = getopt(argc, argv, "l:n:f:")) != -1)// stop when no more option arguments are available
	{
		switch(flag)// check flag and assign argument to a variable
		{
		case'f':
			fFlag = optarg;
			break;
		case'n':
			nFlag = optarg;
			break;
		case'l':
			lFlag = optarg;
			break;
		case'?':
			check_argument(optopt);
		return 1;
		default:
			abort();
		}
	/*test flags
	printf ("Fflag = %s, Nflag = %s, Lvalue = %s\n",
          fFlag, nFlag, lFlag);
	*/	
	}
	

	//output all the data
	if(fFlag != NULL)
		printf("%s\n", fFlag);
	if(nFlag != NULL)
		printf("%s\n", nFlag);
	if(lFlag != NULL)
		printf("%s\n", lFlag);


	//output left over arguments
	for (index = optind; index < argc; index++)
    		printf ("%s\n", argv[index]);
	
 	return 0;
		
	
}


