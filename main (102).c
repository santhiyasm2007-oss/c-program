/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int n,i,sum=0,temp;
    scanf("%d",&n);
    temp=n;
    while(n>0){
        i=n%10;
        sum = sum+(i*i*i);
        n=n/10;
    }
    if(temp==sum){
        printf("armstrong");
    }
    else
    printf("not armstrong");
    
    
    return 0;
}