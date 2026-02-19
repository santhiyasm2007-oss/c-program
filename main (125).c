/******************************************************************************

                            Online C Compiler.
                            
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int unit,hour,count=0;
    int sum=0;
    scanf("%d",&unit);
    for(int i=0;i<unit;i++){
        scanf("%d",&hour);  
        sum = sum+hour;
        if(hour>5){
        count++;
        }
    
    }
    printf("\nTotal Units:%d",sum);
    printf("\nSpike Hours:%d",count);


    return 0;
}