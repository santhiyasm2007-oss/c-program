/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    int arr[n];
    int sum = 0;
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        sum += arr[i];
    }
    float avg = (float)sum / n;
    int count = 0;
    for(int i = 0; i < n; i++) {
        if(arr[i] > avg) {
            count++;
        }
    }
    printf("%d", count);
    return 0;
}
