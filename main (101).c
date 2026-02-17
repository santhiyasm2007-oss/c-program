/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int n,copy,rev=0;
    scanf("%d",&n);
    copy = n;
    while(copy>0){
        rev = rev*10+(copy%10);
        copy/=10;
   
    }
    if(n==rev){
        printf("palindrome");
    }
    else
    printf("not palindrome");
    
    
    return 0;
}