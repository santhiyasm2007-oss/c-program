/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
#include <stdio.h>
int main()
{
    int r, c, a[50][50];
    int minIndex = 0;
    float minAvg = 1000000;
    scanf("%d %d", &r, &c);
    for(int i = 0; i < r; i++)
    {
        for(int j = 0; j < c; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    for(int i = 0; i < r; i++)
    {
        int sum = 0;

        for(int j = 0; j < c; j++)
        {
            sum += a[i][j];
        }

        float avg = (float)sum / c;

        if(avg < minAvg)
        {
            minAvg = avg;
            minIndex = i;
        }
    }
    printf("%d", minIndex);
    return 0;
}