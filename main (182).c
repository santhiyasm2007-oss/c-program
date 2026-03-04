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
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    int target;
    scanf("%d", &target);
    int found = 0;
    for(int i = 0; i < n - 1; i++) {
        for(int j = i + 1; j < n; j++) {
            if(arr[i] + arr[j] == target) {
                printf("%d %d", arr[i], arr[j]);
                found = 1;
                break;
            }
        }
        if(found == 1)
            break;
    }
    if(found == 0)
        printf("No pair");
    return 0;
}
