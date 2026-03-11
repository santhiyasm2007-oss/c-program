/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main() {
    char email[100];
    int i = 0;
    scanf("%s", email);
    while (email[i] != '@'&& email[i]!='0') {
        
            printf("%c",email [i]);
            i++;
        }

    return 0;
}