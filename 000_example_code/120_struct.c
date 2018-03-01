/*******************************************************************************
*  FILE NAME : 120_struct.c
*  AUTHOR : Jason Enochs 
*  CREATION DATE : 12-Feb-2018
*  LAST MODIFIED : 12-Feb-2018
*  DESCRIPTION : Example showing how to assign members of a struct
*
*******************************************************************************/
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct myStruct
{   
    char p1[19];
    unsigned int p2;
    float p3;
    int p4[6]; 
    unsigned int p5;
};

int main(void)
{
    int array[4] = {2,3,8,14};
    struct myStruct* s1 = (struct myStruct*)malloc(sizeof(struct myStruct));    
    strcpy(s1->p1, "buggs_bunny");
    s1->p2 = 0xdeafdeaf;
    s1->p3 = 1910.0777;
    memcpy(s1->p4, array, sizeof(array));
    s1->p5 = 0xFFFFFFFF; 
    
    return 0; 
}

