/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
int main() {
    int n, i, j;
    int a[100];
    int unique = 1;
    scanf("%d", &n);
    for(i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
    for(i = 0; i < n; i++) {
        for(j = i + 1; j < n; j++) {
            if(a[i] == a[j]) {
                unique = 0;
                break;
            }
        }
        if(unique == 0)
            break;
    }
    if(unique == 1)
        printf("Yes");
    else
        printf("No");

    return 0;
}