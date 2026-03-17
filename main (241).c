/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int prime(int n){
    int i;
    if(n<=1){
        return 0;
    }
    for(i=2;i<n;i++){
        {
            if(n%i==0)
            return 0;
        }
    }
    return 1;
    
}
int main()
{
    int n;
    scanf("%d",&n);
    if(prime(n))
        printf("prime");
    else
        printf("not prime");
    

    return 0;
}