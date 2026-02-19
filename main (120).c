/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int n,hours,count=0,sum=0;
    int i,totalcost;
    int cost=200;
    scanf("%d" ,&n);
    for(i=0;i<n;i++){
        scanf("%d",&hours);
        sum = sum+hours;
        if(hours>3){
        count++;
        }
        totalcost = sum*cost;
    }
    
    printf("\nTotalo Overtime Hours:%d",sum);
    printf("\nOvertime Cost:%d",totalcost);
    printf("\nDelayed Deliveries:%d",count);

    return 0;
}