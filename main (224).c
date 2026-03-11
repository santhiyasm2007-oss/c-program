/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
#include<string.h>

int main(){
    char str[100];
    int i,len,flo=0;
    scanf("%s",str);
    len = strlen(str);
    for(i=0;i<len/2;i++) {
        if(str[i]!=str[len-i-1]){
            flo=1;
            break;
        }
    }
    if(flo==0){
        printf("palindrome");
        }
    else{
        printf("Not palindrome");
    }

    return 0;
}