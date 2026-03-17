/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/                                    

#include <stdio.h>

int fibonacci(int n){
    int a=0,b=1,c;
    for(int i=1;i<=n;i++){
        printf("%d",a);
        c=a+b;
        a=b;
        b=c;
    }
}
int main()
{
    int n;
    scanf("%d",&n);
    fibonacci(n);
    return 0;
}