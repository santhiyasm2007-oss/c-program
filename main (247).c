/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/                                    

#include <stdio.h>

int power(int a,int b){
    int result =1;
    
    for(int i=1;i<=b;i++){
        result =result*a;
    }
    return result;
    
}
int main()
{
    int a,b;
    scanf("%d %d",&a,&b);
    printf("%d",power(a,b));
    return 0;
}