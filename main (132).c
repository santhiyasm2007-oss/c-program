/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main(){
    
    int n,status;
    scanf("%d",&n);
    int num,i=0,count=0,Cancelled=0;
    while(i<n){
        scanf("%d",&num);
        if(num==1){
        count++;
        }
        else if(num==0){
            Cancelled++;
            }
    
        i++;
    }
    
    printf("\nSuccessful:%d",count);
    printf("\nCancelled:%d",Cancelled);
    if(Cancelled>count){
        printf("\nStatus:Risk");
    }
    else{
        printf("\nStatus:Safe");
    }

    
    return 0;
}