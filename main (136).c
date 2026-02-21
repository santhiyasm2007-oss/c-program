/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int totalfuel,i,compled=0;
    int tripfuel,trip;
    int count=0;
    scanf("%d",&totalfuel);
    scanf("%d",&trip);
    while(1){
        
        scanf("%d",&tripfuel);
        if(totalfuel >=tripfuel){
            totalfuel = totalfuel-tripfuel;
            count++;
        }
        else{
            break;
        }
    }
    printf("\nCompleted Trips:%d",count);
    printf("\nRemaining Fuel:%d",totalfuel);

    return 0;
}