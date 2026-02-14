/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int n,i,c;
    int a=0,b=1;
    scanf("%d",&n);
    printf("%d%d",a,b);
    
    for(int i=3;i<=n;i++){
        c=a+b;
        a=b;
        b=c;
        printf("%d",c);
    
    }
    


    return 0;                                                 
}