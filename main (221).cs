/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main() {
    char password[100];
    int i = 0, hasUpper = 0;
    scanf("%s", password);
    while (password[i] != '\0') {
        if (password[i] >= 'A' && password[i] <= 'Z') {
            hasUpper = 1;
            break;
        }
        i++;
    }
    if (hasUpper)
        printf("Valid");
    else
        printf("Invalid");
    return 0;
}