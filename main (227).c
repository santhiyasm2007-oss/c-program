/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
int main()
{
    char str[200];
    int i, count = 0;
    printf("Enter the address: ");
    fgets(str, sizeof(str), stdin);   
    for(i = 0; str[i] != '\0'; i++)
    {
        if(str[i] == ' ')
        {
            count++;
        }
    }
    printf("%d", count);
    return 0;
}