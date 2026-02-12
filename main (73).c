/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
#include <stdio.h>

int main() {
    char operator;
    double num1, num2, result;

    printf("Enter an operator (+, -, *, /): ");
    scanf(" %c", &operator);

    printf("Enter two numbers: ");
    scanf("%lf %lf", &num1, &num2);

    switch(operator) {
        case '+':
            result = num1 + num2;
            printf("Result = %.f", result);
            break;

        case '-':
            result = num1 - num2;
            printf("Result = %.f", result);
            break;

        case '*':
            result = num1 * num2;
            printf("Result = %.f", result);
            break;

        case '/':
            if (num2 != 0) {
                result = num1 / num2;
                printf("Result = %.f", result);
            } else {
                printf("Error! Division by zero.");
            }
            break;

        default:
            printf("Error! Invalid operator.");
    }

    return 0;
}
