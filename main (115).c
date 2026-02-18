/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

#include <stdio.h>

int main()
{
    int error,N,count=0;
    int sum = 0;
    scanf("%d",&N);
    for(int i=0;i<N;i++){
        scanf("%d",&error);
        sum = sum+error;
        if(error>50){
            count++;
        }
    }
    
        printf("\nTotal Errors:%d",sum);
        printf("\nCritical Hours:%d",count);

    return 0;

}