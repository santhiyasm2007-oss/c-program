#include <stdio.h>

int main() {
    int i, j, n = 5;
    for(i = 1; i <= 2*n-1; i++) {
        for(j = 1; j <= 2*n-1; j++) {
            if(i <= n) {
                if(j >= n-i+1 && j <= n+i-1)
                    printf(" ");
                else
                   printf("*");
            }
            else {
                if(j >= i-n+1 && j <= 3*n-i-1)
                    printf(" ");
                else
                    printf("*");
            }
        }
        printf("\n");
    }
    return 0;
}