/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
#include <stdio.h>
int main()
{
    int R, C, a[10][10];
    int i, j, k, l, count;
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
            count = 0;
            for(k = 0; k < R; k++)
            {
                for(l = 0; l < C; l++)
                {
                    if(a[i][j] == a[k][l])
                        count++;
                }
            }
            if(count == 1)
            {
                printf("%d", a[i][j]);
                return 0;
            }
        }
    }
    return 0;
}