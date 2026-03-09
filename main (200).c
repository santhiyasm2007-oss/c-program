/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
#include <stdio.h>
#include <stdlib.h>

int main() {
    int R, C;
    scanf("%d %d", &R, &C);
    int a[R][C];
    int sum[R];
    for(int i = 0; i < R; i++) {
        sum[i] = 0;
        for(int j = 0; j < C; j++) {
            scanf("%d", &a[i][j]);
            sum[i] += a[i][j]; 
        }
    }

    int maxDiff = 0;
    for(inti = 0;i < R;i++) {
        for(int j = i + 1; j < R; j++) {
            int diff = abs(sum[i] - sum[j]);
            if(diff > maxDiff) {
                maxDiff = diff;
            }
        }
    }
    printf("%d", maxDiff);

    return 0;
}