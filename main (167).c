/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main() {
    int i, j;
    int n = 5;   

    for(i = 1; i <= n; i++) {
        
        for(j = i; j < n; j++) {
            printf("  ");
        }

        for(j = 1; j <= (2*i - 1); j++) {
            printf("* ");
        }

        printf("\n");
    }


    return 0;
}