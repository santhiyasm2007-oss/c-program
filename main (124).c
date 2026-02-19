/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int n,riskscores,count=0;
    int capacity,sum=0;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d",&riskscores);  
        sum = sum+riskscores;
        if(riskscores>50){
        count++;
        }
    
    }
    printf("\nTotal Risk:%d",sum);
    printf("\nHigh Risk Session:%d",count);


    return 0;
}