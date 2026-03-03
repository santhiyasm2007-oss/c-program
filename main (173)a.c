/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
#include <limits.h>

int main()
{
    int n,i;
    scanf("%d",&n);
    int salary[n];
    for(i=0;i<n;i++){
    scanf("%d",&salary[i]);
    }
    int largest =INT_MIN;
    int secont =INT_MIN;
    for(i=0;i<n;i++){
        if(salary[i]>largest){
            secont=largest;
            largest=salary[i];
        }
        else if(salary[i]>secont&&salary[i]<largest){
            secont=salary[i];
        }
    }                                       
    if(secont==INT_MIN){
        printf("\nno the highest one");
    }
    else{
        printf("\nsecont highest salary :%d",secont);
        }
    
    return 0;
}