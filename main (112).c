/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int gb,N,count=0;
    int sum = 0;
    scanf("%d",&N);
    for(int i=0;i<N;i++){
        scanf("%d",&gb);
        sum= sum+gb;
        if(gb>2){
            
            count++;
        }
    }
    
        printf("\nTotal Data:%d",sum);
        printf("\nHigh Usage Data:%d",count);

    return 0;
}