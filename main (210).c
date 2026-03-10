/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int R, C, a[10][10];
    int i, j, sum, count = 0;
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
        sum = 0;

        for(j = 0; j < C; j++)
        {
            if(j != i)
                sum += a[i][j];
        }

        if(a[i][i] > sum)
            count++;
    }
    printf("%d", count);
    return 0;
}