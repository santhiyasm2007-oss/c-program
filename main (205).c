/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
#include <stdio.h>

int main() {
    int r, c, i, j, k, l;
    int a[50][50];
    int maxCount = 0, freq, value;
    printf("Enter rows and columns: ");
    scanf("%d %d", &r, &c);
    printf("Enter matrix elements:\n");
    for(i = 0; i < r; i++) {
        for(j = 0; j < c; j++) {
            scanf("%d", &a[i][j]);
        }
    }
    for(i = 0; i < r; i++) {
        for(j = 0; j < c; j++) {
            freq = 0;
            for(k = 0; k < r; k++) {
                for(l = 0; l < c; l++) {
                    if(a[i][j] == a[k][l]) {
                        freq++;
                    }
                }
            }
            if(freq > maxCount) {
                maxCount = freq;
                value = a[i][j];
            }
        }
    }
    printf("%d", value);
    return 0;
}