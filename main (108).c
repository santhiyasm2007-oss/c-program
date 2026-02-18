/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int amount,sum=0,N;
    scanf("%d",&N);
    for(int i=0;i<N;i++){
        scanf("%d",&amount);
        sum+=amount;
    }
        printf("Total Collection:%d",sum);

    return 0;
}