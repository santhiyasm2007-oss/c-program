/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int battery, N,hour;
    scanf("%d",&battery);
    scanf("%d",&N);
    for(int i=0;i<N;i++){
        scanf("%d",&hour);
        battery = battery-hour;
    }
    if(battery<0){
        battery = 0;
    }
    printf("Remaining battery:%d%%",battery);

    return 0;
}