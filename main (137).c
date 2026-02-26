/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int N,hours,i=0,count=0;
    scanf("%d",&N);
    while(i<N){
        scanf("%d",&hours);
        if(hours==0){
            count++;
        }
     i++; 
    
    }

    printf("\nInactive Weeks:%d",count);
    if(count>=3)
            printf("\nRisk Status:High");
    else
        printf("\nRisk Status :Low");
         
    

    return 0;
}                                                                                                          