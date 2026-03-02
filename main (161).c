/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int i,j,s;
    for(i=1;i<4;i++)
    {
        for(j=1;j<4-i;j++){
            printf(" ");
        }
        for(j=0;j<i;j++){
            printf("%c",'A'+j);
        }
        for(j=i-2;j>=0;j--){
            printf("%c",'A'+j);
        }
        printf("\n");
    }

    return 0;
}