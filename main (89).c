/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int i,number,exponent;
    long power = 1;
    scanf("%d%d",&number,&exponent);
    for(int i = 1;i<= exponent;i++){
        power=power * number;
    }
    printf("%d",power);

    return 0;
}