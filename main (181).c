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
    int total = 0;
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        total += arr[i]; 
    }
    int leftSum = 0;

    for(int i = 0; i < n; i++) {
        int rightSum = total - leftSum - arr[i];

        if(leftSum == rightSum) {
            printf("%d", i);
            return 0;
        }

        leftSum += arr[i];
    }
    printf("-1");

    return 0;
}