/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int days,hours,i=0;
    int sum=0,count =0;
    scanf("%d",&days);
    while(i<days){
        scanf("%d",&hours);
        sum =sum+hours;
        if(hours>4){
            count++;

        }
        i++;
    }
        printf("\nTotal over time:%d",sum);
        printf("\nBurnout Days:%d",count);

    return 0;
}