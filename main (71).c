/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    char abc;
    scanf("%c", &abc);
    if(abc >= '0' && abc <= '9'){
        printf("Digit");
        
    }
    
    else{
        printf("not Digit");
        
    }

    return 0;
}