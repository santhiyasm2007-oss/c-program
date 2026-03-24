/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
#include <math.h>
int countDigits(int n) {
    int count = 0;
    while(n != 0) {
        count++;
        n /= 10;
    }
    return count;
}
int isArmstrong(int n) {
    int original = n;
    int digits = countDigits(n);
    int sum = 0;
    while(n != 0) {
        int digit = n % 10;
        sum += pow(digit, digits);
        n /= 10;
    }
    if(sum == original)
        return 1;
    else
        return 0;
}
int main() {
    int n;
    scanf("%d", &n);

    if(isArmstrong(n))
        printf("Armstrong");
    else
        printf("Not Armstrong");
    return 0;
}