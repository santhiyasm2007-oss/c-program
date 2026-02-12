/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
#include <stdio.h>

int main() {
    int month;

    printf("Enter month number: ");
    scanf("%d", &month);

    switch(month) {
        case 1:
        case 3:  
        case 5:  
        case 7:  
        case 8:  
        case 10: 
            printf("31 days\n");
            break;

        case 4:  
        case 6:  
        case 9:  
        case 11: 
            printf("30 days\n");
            break;

        case 2: 
            printf("28  or 29 days\n");
            break;

        default:
            printf("Invalid month\n");
    }

    return 0;
}
