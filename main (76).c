/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/


#include <stdio.h>

int main() {
    char s;

    printf("Enter a character: ");
    scanf("%c", &s);

    switch(s) {
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
        case 'A':
        case 'E':
        case 'I':
        case 'O':
        case 'U':
            printf("It is a Vowel.");
            break;

        default:
            printf("It is a Consonant.");
    }

    return 0;
}
