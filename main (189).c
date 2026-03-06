/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

***************************************************************************/
#include <stdio.h>

#include <stdio.h>
int main() {
    int n, i, j, count = 0, flag;
    int arr[100];
    scanf("%d", &n);

    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    for(i = 0; i < n; i++) {
        flag = 0;
        for(j = 0; j < i; j++) {
            if(arr[i] == arr[j]) {
                flag = 1;
                break;
            }
        }
        if(flag == 0) {
            count++;
        }
    }
    printf("%d", count);
    return 0;
}