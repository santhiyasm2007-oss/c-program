/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
#include<string.h>

int main(){
    char str[100];
    int i,len;
    scanf("%s",str);
    len = strlen(str);
    for(i=len-1;i>=0;i--) {
            printf("%c",str[i]);
        }

    return 0;
}