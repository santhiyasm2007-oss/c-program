/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int n,low,minimum=0;
    int count=0;
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        scanf("%d",&low);
        if(i==1)
        minimum=low;
        if(low<minimum)
        minimum=low;
        
        if(low<210){
        count++;
        }
    
    
    }
    printf("\nMinimum Voltage:%d",minimum);
    printf("\nLow Voltage:%d",count);
    return 0;
}