/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

******************************************************************************/

#include <stdio.h>

int main() {
    int mark;
    scanf("%d", &mark);

    if (mark >= 75 && mark <90){
        printf(" Grade B ");
    } 
    
    else{
        printf("good");
    
    }

    return 0;
}