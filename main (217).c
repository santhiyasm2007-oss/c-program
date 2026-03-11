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
    int sum = 0;
    for(int i = 0; i < R; i++) {
        for(int j = 0; j < C; j++) {
            if(i == 0 || i == R-1 || j == 0 || j == C-1) {
                sum += a[i][j];
            }
        }
    }
    printf("%d", sum);
    return 0;
}