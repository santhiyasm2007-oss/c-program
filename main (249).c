/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/                                    

#include <stdio.h>

int table(int n){
    int i;
    int sum=0;
    
    for(int i=1;i<=10;i++){
        printf("%d*%d = %d\n",i,n,i*n);
    
    }
}
int main()
{
    int n;
    scanf("%d",&n);
    table(n);
    return 0;
}