/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int n;
    scanf("%d",&n);
    int total =0;
    int amount;
    
    for(int i=0;i<n;i++){
        scanf("%d",&amount);
        total += amount;
    }
    if(total>10000){
        printf("limit exceeded");
        }
    else
        printf("Approved");
        
    
    

    
    
    
    return 0;
}