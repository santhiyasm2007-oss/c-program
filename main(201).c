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
    int i, j, k;
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
        for(j = 0; j < c; j++)
        {
            int rowMin = 1;
            int colMax = 1;
            for(k = 0; k < c; k++)
            {
                if(a[i][j] > a[i][k])
                {
                    rowMin = 0;
                    break;
                }
            }

            for(k = 0; k < r; k++)
            {
                if(a[i][j] < a[k][j])
                {
                    colMax = 0;
                    break;
                }
            }
            if(rowMin && colMax)
            {
                count++;
            }
        }
    }
    printf("%d", count);
    return 0;
}

