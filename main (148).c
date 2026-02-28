/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main() {
    int n, i = 0, x;
    int congestion = 0, streak = 0, maxStreak = 0;

    scanf("%d", &n);

    while(i < n) {
        scanf("%d", &x);

        if(x > 20) {
            congestion++;
            streak++;
            if(streak > maxStreak)
                maxStreak = streak;
        } else {
            streak = 0;
        }

        i++;
    }

    printf("\nCongestion Minutes: %d",congestion);
    printf("\nLongest Congestion Streak: %d",maxStreak);

    return 0;
}