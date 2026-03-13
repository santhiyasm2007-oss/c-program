/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
#include <stdio.h>
#include <string.h>
int main() {
    char str[100], ch;
    int i, index = -1;
    printf("Enter the string: ");
    scanf("%s", str);
    printf("Enter the character to search: ");
    scanf(" %c", &ch);
    for(i = 0; str[i] != '\0'; i++) {
        if(str[i] == ch) {
            index = i;
            break;
        }
    }
    printf("%d", index);
    return 0;
}

