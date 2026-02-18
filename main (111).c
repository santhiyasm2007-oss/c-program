/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int mark,N,average,count=0;
    int sum = 0;
    scanf("%d",&N);
    for(int i=0;i<N;i++){
        scanf("%d",&mark);
        sum= sum+mark;
        average= sum/N;
        if(mark<40){
            
            count++;
        }
    }
    
        printf("\nAverage score :%d",average);
        printf("\nFailed subjects:%d",count);

    return 0;
}