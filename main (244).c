/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int sumn(int n){
    int sum=0,i;
    for(i=1;i<=n;i++){
            sum =sum+i;
        }
        return sum;

}
int main()
{
    int n;
    scanf("%d",&n);
    printf("%d",sumn(n));
    
    return 0;
}