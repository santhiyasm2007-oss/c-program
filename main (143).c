/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int maxw,totalw=0,i=0,hw,n,weight;
    int sum=0,count =0,overload=0;
    scanf("%d",&maxw);
    scanf("%d",&n);
    while(i<n){
        scanf("%d",&hw);
        if(totalw + hw<=maxw){
            totalw+=hw;
            count++;
        }
        else{
            overload=1;
            break;
        }
        
        i++;
    }
        printf("\nPeople Entert:%d",count);
        if(overload==1){
          printf("\nOverload Status:yes");
        }
        
        else
        printf("\nOverload Status:No");
        

    return 0;
}