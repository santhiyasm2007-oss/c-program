/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
#include <stdio.h>
#include <string.h>

int main() {
    char str[200];
    int i, words = 1;
    printf("Enter a sentence: ");
    fgets(str, sizeof(str), stdin);
    for(i = 0; str[i] != '\0'; i++) {
        if(str[i] == ' ') {
            words++;
        }
    }
    if(str[0] == '\n') {
        words = 0;
    }
    printf("Word Count: %d", words);
    return 0;
}