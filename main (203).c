/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int r, c;
    scanf("%d %d", &r, &c);
    int a[r][c];
    int i, j;
    int count = 0;
    for(i = 0; i < r; i++)
    {
        for(j = 0; j < c; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    for(i = 0; i < r; i++)
    {
        int even = 0, odd = 0;
        for(j = 0; j < c; j++)
        {
            if(a[i][j] % 2 == 0)
                even++;
            else
                odd++;
        }
        if(even == odd)
            count++;
    }
    printf("%d", count);
    return 0;
}