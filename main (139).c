/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int power,i=0,N,count=0,max=0;
    scanf("%d",&N);
    while(i<N){
        scanf("%d",&power);
        if(i==0)
            max ==0;
            if(max<power)
            max =power;
            if (power>5)
            max= power;
            if(power>5)
            count++;
            i++;
        
    }
        printf("\nmax Usage:%d",max);
        printf("\nSurge Hours:%d",count);
        
    
    return 0;
}                                                                                                          