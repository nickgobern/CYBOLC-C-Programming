

#include  <stdio.h>

int main()
{
        signed char chr;
        chr = 'v';
        int y = chr;
        for(int x = 17; x > 0; --x)
        {
            chr += 1;
            if(chr < y)
                y = chr;
            printf("%d\n", chr);
        }
        return y;
}


