/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.*/

#include <stdio.h>

int main() {
    int fuel, n, i = 0, burn;
    int stage = 0, waste = 0;
    scanf("%d", &fuel);
    scanf("%d", &n);
    while(i < n) {
        scanf("%d", &burn);
        fuel -= burn;

        if(fuel < 0 && stage == 0) {
            stage = i + 1;
            waste = -fuel;
        }

        i++;
    }

    if(stage == 0)
        printf("Emergency Stage: Not Occurred\n");
    else
        printf("Emergency Stage: %d\n", stage);

    printf("Fuel Wasted: %d\n", waste);

    return 0;
}