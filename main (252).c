/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
#include <stdio.h>
int power(int a, int b) {
    if (b == 0) {
        return 1;   
    }
    else {
        return a * power(a, b - 1);
    }
}
int main() {
    int A, B;
    scanf("%d %d", &A, &B);
    int result = power(A, B);
    printf("%d", result);
    return 0;
}