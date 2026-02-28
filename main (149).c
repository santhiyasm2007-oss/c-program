/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
#include <stdio.h>

int main() {
    int n, i = 0, x;
    int fail = 0, count = 0, lock = 0;

    scanf("%d", &n);

    while(i < n) {
        scanf("%d", &x);

        if(x == 0) {
            fail++;
            count++;
            if(count == 3 && lock == 0)
                lock = i + 1;
        } 
        else {
            count = 0;
        }
        i++;
    }
    if(lock == 0)
        printf("\nLock Triggered At Attempt: Not Locked");
    else
        printf("\nLock Triggered At Attempt: %d", lock);

    printf("\nTotal Failed Attempts: %d", fail);

    return 0;
}