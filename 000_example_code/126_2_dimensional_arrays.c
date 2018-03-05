#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void func(int** p)
{
    for(int row = 0; row < 3; row++)
    {
        for(int col = 0; col < 4; col++)
        {
            printf("%d, ",p[row][col]);
        }
        printf("\n");
    }
}

int main(void)
{

    int** p = malloc(sizeof(int*)*3);
    for(int r = 0; r < 3; r++)
        p[r] = malloc(sizeof(int)*4);

    p[0][0] = 1;
    p[0][1] = 2;
    p[0][2] = 3;
    p[0][3] = 4;
    p[1][0] = 5;
    p[1][1] = 6;
    p[1][2] = 7;
    p[1][3] = 8;
    p[2][0] = 9;
    p[2][1] = 10;
    p[2][2] = 11;
    p[2][3] = 12;

    func(p);

    for(int r = 0; r < 3; r++)
        free(p[r]);
    free(p);

    return 0;

}

