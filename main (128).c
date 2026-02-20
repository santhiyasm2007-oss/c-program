/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int noice,noiceviolation=0,corntstreak =0,longviolation=0;
    int noicelevel;
    scanf("%d",&noice);
    int i =1;
    while(i<=noice){
        scanf("%d",&noicelevel);
        if(noicelevel>70){
            noiceviolation++;
            corntstreak++;
        }
        if(corntstreak>longviolation){
            longviolation=corntstreak;
        }else{
            corntstreak=0;
        }
        i++;
        
    }
    printf("\nNoise Violations:%d",noiceviolation);
    printf("\nLongest Violations Streak:%d",longviolation);

    return 0;
    
}