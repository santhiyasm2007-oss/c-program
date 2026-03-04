/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int n,i;
    int maxFromRight;
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    maxFromRight=arr[n-1];
    arr[n-1]=-1;
    {for(i=n-2;i>=0;i--){
        int temp=arr[i];
        arr[i]=maxFromRight;
        if(temp>maxFromRight){
            maxFromRight=temp;
        }
    }
    for(i=0;i<n;i++){
            printf("%d",arr[i]);
        }
    }
    return 0;
}