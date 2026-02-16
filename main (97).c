/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.
   
*******************************************************************************/
#include <stdio.h>

int main()
{
    int n,i;
    int sum =0;
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        sum=sum+(i*i);
    }
    printf("%d",sum);
    

    return 0;
}