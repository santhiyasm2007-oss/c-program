/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int palindrome(int n){
    int original =n;
    int rev=0;
    while(n!=0){
            rev=rev*10+n%10;
            n=n/10;
        }
        if(original==rev)
        return 1;
        else
        return 0;
}
int main()
{
    int n;
    scanf("%d",&n);
    if(palindrome(n)){
        printf("palindrome");
    }
    else{
        printf("not palindrome");

    }
    return 0;
}