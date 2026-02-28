/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
#include <stdio.h>

int main() {
    int maxCapacity, N;
    scanf("%d", &maxCapacity);
    scanf("%d", &N);

    int treated = 0, rejected = 0;
    int i = 0, patients;

    while (i < N) {
        scanf("%d", &patients);

        if (treated + patients <= maxCapacity) {
            treated += patients;
        } else {
            if (treated < maxCapacity) {
                rejected += (treated + patients - maxCapacity);
                treated = maxCapacity;
            } else {
                rejected += patients;
            }
        }
        i++;
    }

    printf("\nTreated Patients: %d", treated);
    printf("\nRejected Patients: %d", rejected);

    return 0;
}