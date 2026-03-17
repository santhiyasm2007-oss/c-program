/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int factorial(int n){
    int i,fact=1;
    for(i=1;i<=n;i++){
        fact = fact*i;
    }
    return fact;
    
}
int main()
{
    int n;
    scanf("%d",&n);
    printf("%d",factorial(n));

    return 0;
}