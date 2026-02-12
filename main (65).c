/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

******************************************************************************/

#include <stdio.h>

int main() {
    char abc;
    scanf("%c", &abc);

    if (abc>='A' && abc<='Z'){
        printf(" Uppercase letter ");
    } 
    
    else if(abc>='a' && abc<='b'){
        printf("lower case letter");
    }
    else
    printf("not alphabet");

    return 0;
}