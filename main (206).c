/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
#include <stdio.h>

int main() {
    int r, c, i, j, count = 0;
    int a[50][50];
    printf("Enter rows and columns: ");
    scanf("%d %d", &r, &c);
    printf("Enter matrix elements:\n");
    for(i = 0; i < r; i++) {
        for(j = 0; j < c; j++) {
            scanf("%d", &a[i][j]);
        }
    }
    for(i = 0; i < r; i++) {
        int sorted = 1;  
        for(j = 0; j < c-1; j++) {
            if(a[i][j] > a[i][j+1]) {
                sorted = 0;
                break;
            }
        }
        if(sorted == 1) {
            count++;
        }
    }
    printf("%d", count);
    return 0;
}
