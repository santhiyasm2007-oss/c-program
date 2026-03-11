/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
#include <stdio.h>

int isPrime(int num) {
    if (num <= 1)
        return 0;

    for (int i = 2;i <= num / 2;i++) {
        if (num % i == 0)
            return 0;
    }
    return 1;
}
int main() {
    int r, c;
    scanf("%d %d",&r,&c);
    int a[r][c];
    for (int i = 0;i < r;i++) {
        for (int j = 0; j < c; j++) {
            scanf("%d", &a[i][j]);
        }
    }
    int count = 0;
    for (int i = 0;i < r;i++) {
        int allPrime = 1;
        for (int j = 0; j < c; j++) {
            if (!isPrime(a[i][j])) {
                allPrime = 0;
                break;
            }
        }
        if (allPrime)
            count++;
    }
    printf("%d", count);
    return 0;
}
    