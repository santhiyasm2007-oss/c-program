/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int a,b;
    int sum = 0;
    scanf("%d%d",&a,&b);
    for(int i=a;i<=b;i++){
        if(i % a == 0){
            sum += i;
        }
        
    }
    printf("%d",sum);

    return 0;
}