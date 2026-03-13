/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int R, C, a[10][10];
    int i, j, k, unique, count = 0;
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
        unique = 1;
        for(j = 0; j < C; j++)
        {
            for(k = j + 1; k < C; k++)
            {
                if(a[i][j] == a[i][k])
                {
                    unique = 0;
                    break;
                }
            }
            if(unique == 0)
                break;
        }
        if(unique == 1)
            count++;
    }
    printf("%d", count);
    return 0;
}