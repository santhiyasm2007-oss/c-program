/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
#include <stdio.h>
int main() {
    int R, C;
    scanf("%d %d", &R, &C);
    int a[R][C];
    for(int i = 0; i < R; i++) {
        for(int j = 0; j < C; j++) {
            scanf("%d", &a[i][j]);
        }
    }
    int maxProduct = -999999;
    for(int i = 0; i < R; i++) {
        for(int j = 0; j < C; j++) {
            for(int k = i + 1; k < R; k++) {
                for(int l = 0; l < C; l++) {
                    int product = a[i][j] * a[k][l];
                    if(product > maxProduct) {
                        maxProduct = product;
                    }
                }
            }
        }
    }

    printf("%d", maxProduct);

    return 0;
}