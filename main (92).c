/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int n, prime;
    int count =0;
    scanf("%d",&n);
    for(int i=2;i<=n;i++){
        prime = 1;
        for(int j=2; j<i;j++){
            if(i%j ==0){
                prime = 0;
                break;
            }
        }
        if (prime == 1){
            count++;
        }
        
    }
    printf("%d",count);

    return 0;
}