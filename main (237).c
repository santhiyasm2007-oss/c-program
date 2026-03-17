/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

void checkevenodd(int n){
    if(n%2 ==0){
        printf("even");
    }
    else{
        printf("odd");
    }
}
int main()
{
     int n;
     scanf("%d",&n);
     checkevenodd(n);

    return 0;
}