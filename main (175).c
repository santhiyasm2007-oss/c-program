/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
#include <limits.h>

int main()
{
    int n,i;
    int x;
    scanf("%d",&n);
    int mark[n];
    for(i=0;i<n;i++){
    scanf("%d",&mark[i]);
    }
    scanf("%d",&x);
    int count=0;
    for(i=0;i<n;i++){
        if(mark[i]==x){
            count++;
        }
    }
    printf("%d",count);
    
    return 0;
}