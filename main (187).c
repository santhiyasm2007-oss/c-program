/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
#include <stdio.h>

int main() {
    int i,n;
    scanf("%d", &n);

    int arr[n];
    for(int i=0; i < n; i++){
        scanf("%d", &arr[i]);
    }

    int count =1;
    
    for(i=0;i<n/2;i++){
        if(arr[i]!=arr[n-i-1]){
            
            count=0;
            break;
        }
    }
    if(count==1){
        printf("Yes");
    }
    else
    {
        printf("No");
    }
    return 0;
}