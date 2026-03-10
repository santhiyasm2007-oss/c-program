/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
int main()
{
    int R, C, a[10][10];
    int i, j, k, count = 0, prime;
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
            int num = a[i][j];
            prime = 1;
            if(num <= 1)
                prime = 0;
            for(k = 2; k < num; k++)
            {
                if(num % k == 0)
                {
                    prime = 0;
                    break;
                }
            }
            if(prime == 1)
                count++;
        }
    }
    printf("%d", count);
    return 0;
}