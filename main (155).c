/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int i,n,j,num=1; 
    printf("enter n values:");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        
        for(j=1;j<=i;j++){
        printf(" %d",num);
        num++;
        
    }
        printf("\n");
    }

    return 0;
}