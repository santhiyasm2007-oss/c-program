/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

******************************************************************************/

#include <stdio.h>

int main() {
    int a;
    scanf("%d", &a);

    if (a%11 == 0){
        printf("%d is Divisible by 11",a);
    }
    else
    printf("not divisible by 11");

    return 0;
}