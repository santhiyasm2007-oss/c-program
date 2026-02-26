/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int hours,i=0,N,count=0,sum=0;
    scanf("%d",&N);
    while(i<N){
        scanf("%d",&hours);
        sum=hours+sum;
            if(hours>2)
            count++;

            i++;
        
    }
        printf("\nTotal Dely:%d",sum);
        printf("\nDelayed Days:%d",count);
        
    
    return 0;
}                                                                                                          