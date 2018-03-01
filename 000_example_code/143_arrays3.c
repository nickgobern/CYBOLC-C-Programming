#include <stdio.h>
#include "143_arrays3.h"
#define SPAN 1000
int main(void)
{
    int matrix[SPAN][SPAN] = {};
    int dummy;

    BEGIN_PROFILE
        for(int i = 0; i < SPAN; i++)
        {
            for(int j = 0; j < SPAN; j++)
            {
                dummy = matrix[i][j];
            }
        }
    END_PROFILE

    BEGIN_PROFILE
        for(int j = 0; j < SPAN; j++)
        {
            for(int i = 0; i < SPAN; i++)
            {
                dummy = matrix[i][j];
            }
        }
    END_PROFILE

    return 0;
}
