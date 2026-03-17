/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int sumDigist(int n){
    int sum = 0;
    while(n!=0){
        sum=sum+n%10;
        n = n / 10;
    }
    return sum;
    
}
int main()
{
    int n;
    scanf("%d",&n);
    printf("%d",sumDigist(n));

    return 0;
}