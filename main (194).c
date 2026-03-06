/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
#include <stdio.h>
int main() {
    int n, i;
    int a[100];

    scanf("%d", &n);

    for(i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    int max1 = -100000, max2 = -100000;
    int min1 = 100000, min2 = 100000;

    for(i = 0; i < n; i++) {

        if(a[i] > max1) {
            max2 = max1;
            max1 = a[i];
        }
        else if(a[i] > max2) {
            max2 = a[i];
        }
        if(a[i] < min1) {
            min2 = min1;
            min1 = a[i];
        }
        else if(a[i] < min2) {
            min2 = a[i];
        }
    }
    int product1 = max1 * max2;
    int product2 = min1 * min2;

    if(product1 > product2)
        printf("%d", product1);
    else
        printf("%d", product2);
    return 0;
}