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
    for(int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    int minPrice = arr[0];
    int maxProfit = arr[1] - arr[0];

    for(int i = 1; i < n; i++) {
        int profit = arr[i] - minPrice;

        if(profit > maxProfit)
            maxProfit = profit;

        if(arr[i] < minPrice)
            minPrice = arr[i];
    }
    printf("%d", maxProfit);
    return 0;
}