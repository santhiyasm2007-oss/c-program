/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int n,amount,totalamount,count=0;
    int i;
    scanf("%d",&amount);
    scanf("%d",&n);
    int balance=amount;
    
    for(i=0;i<n;i++){
    
        scanf("%d",&totalamount);
        balance=balance-totalamount;
        if(balance<5000){
        count++;
        }
    }
    
    printf("\nRemaining Case:%d",balance);
    printf("\nRisk Count:%d",count);

    return 0;
}