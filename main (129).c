/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int day,initialb,count=0;
    int dailytransaction;
    scanf("%d",&day);
    scanf("%d",&initialb);
    int i =0;
    while(i<day){
        scanf("%d",&dailytransaction);
        initialb=initialb+dailytransaction;
        
        if(initialb<2000){
            count++;
        }
        
        i++;
    }
        
    
    printf("\nFinal Balance:%d",initialb);
    printf("\nLow Balance:%d",count);

    return 0;
    
}