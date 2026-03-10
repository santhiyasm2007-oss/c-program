/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
#include <stdlib.h>

int main()
{
    int R, C, a[10][10];
    int i, j, k, l;
    int max = 0, diff;
    scanf("%d %d", &R, &C);
    for(i = 0; i < R; i++)
    {
        for(j = 0; j < C; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    for(i = 0; i < R; i++)
    {
        for(j = 0; j < C; j++)
        {
            for(k = i + 1; k < R; k++)
            {
                for(l = 0; l < C; l++)
                {
                    diff = abs(a[i][j] - a[k][l]);

                    if(diff > max)
                        max = diff;
                }
            }
        }
    }
    printf("%d", max);
    return 0;
}