/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/                                    

#include <stdio.h>

int countv(int n){
    int count=0;
    while(n!=0){
        n=n/10;
        count++;
    }

    return count;


}
int main()
{
    int n,result;
    scanf("%d",&n);
    result = countv(n);
    printf("%d",result);
    
    return 0;
}