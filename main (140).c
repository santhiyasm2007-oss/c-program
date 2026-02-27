/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int datapack,n,dailyuse,alldailyuse;
    int i=0,count=0,sum=0;
    scanf("%d",&datapack);
    scanf("%d",&n);
    while(i<n){
        scanf("%d",&alldailyuse);
        datapack = datapack - alldailyuse;
        if(datapack<= 0&& count ==0){
            count=i+1;
            if(datapack<0)
            sum=sum-datapack;
        else
        sum=0;
            break;
        }
        i++;
    }
        if(count==0){
            printf("\nExhausted Day:Not Exhausted");
            printf("\nOverused Data:0");
        }
        else{
            printf("\nExhausted Day:%d",count);
            printf("\nOverused Data:%d\n",sum);
            
        }
    

    return 0;
}