/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int i,j;
    for(i=0;i<5;i++)
    {
        for(j=0;j<5-i;j++){
            printf("* ");
        }
    
        printf("\n");
    }

    return 0;
}