/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int n,noise,count=0;
    int gratest=0;
    scanf("%d" ,&n);
    for(int i=0;i<n;i++){
        scanf("%d",&noise);
        if(i==0||noise>gratest){
            
            gratest=noise;
        }
        
        if(noise>70){
        count++;
        }
    }
    printf("\nMaximum Noise:%d",gratest);
    printf("\nNoisy Periods:%d",count);


    return 0;
}