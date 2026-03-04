/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
#include <stdio.h>
#include <limits.h>
int main() {
    int n;
    scanf("%d", &n);
    int arr[n];
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    int min = INT_MAX;
    int found = 0;
    for(int i = 0; i < n; i++) {
        if(arr[i] > 0 && arr[i] < min) {
            min = arr[i];
            found = 1;
        }
    }
    if(found == 1)
        printf("%d", min);
    else
        printf("No positive");
    return 0;
}
