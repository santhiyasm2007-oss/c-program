/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int atmcash,n,withdrawals;
    int i=0,rc =0;
    scanf("%d",&atmcash);
    scanf("%d",&n);
    while(i<n){
        scanf("%d",&withdrawals);
        if(atmcash>=withdrawals){
            atmcash-=withdrawals;
            rc++;
        }
        else{
            break;
        }
        i++;
    }
        printf("\nSuccesful Withdrawals:%d",rc);
        printf("\nRemaining Cash:%d",atmcash);

    return 0;
}