/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int n,revenue;
    int sum=0,count=0;
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        scanf("%d",&revenue);
        sum=sum+revenue;
        
        if(revenue>50000){
        count++;
        }
    
    
    }
    printf("\nTotal Revenue:%d",sum);
    printf("\nTarget Days:%d",count);
    return 0;
}