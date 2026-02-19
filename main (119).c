/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int n,minutes,count=0;
    int i;
    scanf("%d",&n);
    int sum=0;
    
    for(i=0;i<n;i++){
    
        scanf("%d",&minutes);
        sum = sum+minutes;
        if(minutes>30){
        count++;
        }
    }
    
    printf("\nTotalo Delay:%d",sum);
    printf("\nDelayed Deliveries:%d",count);

    return 0;
}