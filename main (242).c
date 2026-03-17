/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int reverse(int n){
    int rev=0;
    while(n!=0){
        {
            rev=rev*10+n%10;
            n=n/10;
        }
    }
    return rev;
}
int main()
{
    int n;
    scanf("%d",&n);
    printf("%d",reverse(n));
    

    return 0;
}