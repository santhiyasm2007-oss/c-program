/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int fuela,N,count=0,Highest=0,highydays=0;
    int sum = 0;
    scanf("%d",&N);
    for(int i=0;i<N;i++){
        scanf("%d",&fuela);
        if(i==0){
            Highest=fuela;
            
        }
        if(fuela>Highest){
            Highest=fuela;
        }
        if(fuela>100){
            
            count++;
        }
    }
    
        printf("\nHighest Price:%d",Highest);
        printf("\nHigh Price Days:%d",count);

    return 0;
}