/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main(){
    
    int n;
    scanf("%d",&n);
    int num,i=0,count=0,max=0;
    while(i<n){
        scanf("%d",&num);
        if(num==0){
        count++;
        if(count>max){
            max = count;
            }
            
        }
        else{
            count =0;
        }
        i++;
    }
    
    printf("Longest Failure Streak:%d",max);
    
    return 0;
}