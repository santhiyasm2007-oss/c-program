/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int patient,N,count=0;
    int sum = 0;
    scanf("%d",&N);
    for(int i=0;i<N;i++){
        scanf("%d",&patient);
        sum= sum+patient;
        if(patient>100){
            
            count++;
        }
    }
    
        printf("\nTotal Patient:%d",sum);
        printf("\nOvercrowed Days:%d",count);

    return 0;
}