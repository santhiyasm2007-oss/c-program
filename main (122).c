/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int n,totaldata,count=0;
    int gb,sum=0,reminingdata;
    scanf("%d",&totaldata);
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d",&gb);  
        totaldata -= gb;
        if(totaldata>=0){
        count++;
        }
    
    }
    printf("\nRemaining Data:%d",totaldata);
    printf("\nSuccessful Days:%d",count);


    return 0;
}