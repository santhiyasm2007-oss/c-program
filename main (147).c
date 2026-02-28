/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);
    int prev, curr;
    scanf("%d", &prev);
    int i = 2, totalDrops = 0, consecutive = 0, crashDay = 0;
    while (i <= N) {
        scanf("%d", &curr);
        if (curr < prev) {
            totalDrops++;
            consecutive++;
            if (consecutive == 3 && crashDay == 0)
                crashDay = i;
        } else {
            consecutive = 0;
        }

        prev = curr;
        i++;
    }

    if (crashDay == 0)
        printf("Crash Day: Not Detected\n");
    else
        printf("Crash Day: %d\n", crashDay);

    printf("Total Drops: %d\n", totalDrops);
    return 0;
}