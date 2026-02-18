/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int lossunit,N,count=0;
    int sum = 0;
    scanf("%d",&N);
    for(int i=0;i<N;i++){
        scanf("%d",&lossunit);
        sum=sum+lossunit;
        if(lossunit>=100){
            count++;
        }
    }
    
        printf("\nTotal Loss:%d",sum);
        printf("\nHigh Loss Days:%d",count);

    return 0;
}