/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int perday,N,count=0;
    int sum = 0;
    scanf("%d",&N);
    for(int i=0;i<N;i++){
        scanf("%d",&perday);
        sum=sum+perday;
        if(perday>=50){
            count++;
        }
    }
    
        printf("\nTotal Rainfal:%d",sum);
        printf("\nHeavy rain Days:%d",count);

    return 0;
}