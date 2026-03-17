/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/                                    

#include <stdio.h>

int perfact(int n){
    int i;
    int sum=0;
    
    for(int i=1;i<n;i++){
        if(n%i==0){
            sum =sum+i;
        }
    }
    if(sum==n){
        return 1;
    }
    else{
        return 0;
    }
    
}
int main()
{
    int n;
    scanf("%d",&n);
    if(perfact(n)){
        printf("Perfact number");
    }
    else{
        printf("Not Perfact number");
    }
    return 0;
}