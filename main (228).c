/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    char str[100];
    int i =0;
    printf("Enter a string:");
    fgets(str,sizeof(str),stdin);
    while(str[i]!='\0'){
        if(str[i]>'a'&&str[i]<='z'){
                str[i]=str[i]-32;
            }
            i++;

    }
    printf("%s",str);

    return 0;
}