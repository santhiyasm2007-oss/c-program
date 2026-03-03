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
    scanf("%d",&n);
    int stop[n];
    for(i=0;i<n;i++){
    scanf("%d",&stop[i]);
    }
    int start=0;
    int end=n-1;
    int temp;
    while(start<end){
        temp=stop[start];
        stop[start]=stop[end];
        stop[end]=temp;
        start++;
        end--;
    }
    for(i=0;i<n;i++){
        printf("%d",stop[i]);
    }  
    
    return 0;
}