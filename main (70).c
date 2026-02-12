/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    float units;
    scanf("%f",&units);
    if(units>=100 && units<=200){
        printf("Bill amount = Rs.%.0f",units*5);
        
    }
    else if (units>=201 && units<=300)
    printf("Bill amount = Rs.%.0f",units*7);
    else
    printf("Bill amount = Rs.%.0f",units*8);
    
    

    return 0;
}