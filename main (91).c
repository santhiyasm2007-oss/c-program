/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int n;
    int count =0;
    scanf("%d",&n);
    for(;n!=0;n/=10){
        
        if(n% 2 == 0){
            count++;
        }
        
    }
    printf("%d",count);

    return 0;
}