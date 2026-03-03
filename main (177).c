/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>


int main()
{
    int exectesum;
    int missing;
    int n,i,sum=0;
    scanf("%d",&n);
    int roleno;
    for(i=0;i<n-1;i++){
        
        scanf("%d",&roleno);
        sum+=roleno;
    }
    exectesum=n*(n+1)/2;
    missing = exectesum-sum;
    printf("%d",missing);

    
    return 0;
}