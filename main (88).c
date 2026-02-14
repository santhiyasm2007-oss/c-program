/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>                   

int main()
{
    int n;
    int sum = 0;
    scanf("%d",&n);
    for(; n> 0; n = n/10){
        sum = sum + (n % 10);
    }
        printf("%d",sum);
    
    return 0;                                                 
}