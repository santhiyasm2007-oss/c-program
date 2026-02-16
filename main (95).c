/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
int findGCD(int a,int b);
int main()
{
    int a,b,gcd;
    scanf("%d %d",&a,&b);
    gcd =findGCD(a,b);
    printf("%d",gcd);


    return 0;
}
int findGCD(int a,int b){
    if(a==0)
        return b;
    findGCD(b % a,a);    
    
}
