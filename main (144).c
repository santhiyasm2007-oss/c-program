/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int wallbalance,n,purchase;
    int i=0,count=0;
    scanf("%d",&wallbalance);
    scanf("%d",&n);
    while(i<n){
        scanf("%d",&purchase);
        if(wallbalance>=purchase){
            wallbalance-=purchase;
            count++;
        }
        else{
            break;
            
        }
        i++;
    }
    printf("\nSuccesful Purchase:%d",count);
    printf("\nFinal Balance:%d",wallbalance);

    return 0;
}