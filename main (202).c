/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
#include <stdio.h>
int main()
{
    int r,c;
    scanf("%d %d",&r,&c);

    int a[r][c];
    int i,j;

    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    int max = -9999;
    for(i=0;i<r-1;i++)
    {
        for(j=0;j<c-1;j++)
        {
            int sum = a[i][j] + a[i][j+1] + a[i+1][j] + a[i+1][j+1];

            if(sum > max)
            {
                max = sum;
            }
        }
    }
    printf("%d",max);
    return 0;
}