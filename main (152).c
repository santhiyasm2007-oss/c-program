/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
#include <stdio.h>

int main(){
    int n,i=0,x;
    int high=0, count=0, fraud=0;
    scanf("%d",&n);
    while(i<n){
        scanf("%d",&x);
        if(x>=50000){
            high++;
            count++;
            if(count==3 && fraud==0)
                fraud=i+1;
        } 
        else
            count=0;

        i++;
    }
    if(fraud==0)
        printf("Fraud Triggered At Attempt: Not Triggered\n");
    else
        printf("Fraud Triggered At Attempt: %d\n",fraud);

    printf("High-Value Transactions: %d\n",high);

    return 0;
}