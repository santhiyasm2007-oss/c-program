/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
#include <stdio.h>
int findMax(int A,int B)
{
    if(A>B){
        return A;
    }
    else{
        return B;
    }
}  
int main()
{
    int A,B,max;
    scanf("%d" "%d",&A,&B);
    max = findMax(A,B);
    printf("%d",max);
    return 0;
}