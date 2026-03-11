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
    for(int i = 0;i < R;i++) {
        for(int j = 0; j < C; j++) {
            scanf("%d", &a[i][j]);
        }
    }
    int count = 0;
    for(int i = 0;i < R;i++) {
        int increasing = 1;
        for(int j = 1;j < C;j++) {
            if(a[i][j]<=a[i][j-1]) {
                increasing = 0;
                break;
            }
        }
        if(increasing) {
            count++;
        }
    }
    printf("%d", count);
    return 0;
}