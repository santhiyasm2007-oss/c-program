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
    int maxRow = 0;
    int maxLen = 0;
    for(int i = 0; i < R; i++) {
        int count = 1;
        for(int j = 1; j < C; j++) {
            if((a[i][j] % 2 == 0 && a[i][j-1] % 2 != 0) ||
               (a[i][j] % 2 != 0 && a[i][j-1] % 2 == 0)) {
                count++;
            } else {
                break;
            }
        }
        if(count > maxLen) {
            maxLen = count;
            maxRow = i;
        }
    }
    printf("%d", maxRow);
    return 0;
}