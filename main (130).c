/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
    
#include <stdio.h>

int main()
{
    int totaldata,n, datausage ,count=0;
    scanf("%d",&totaldata);
    scanf("%d",&n);
    int i = 0;
    while(i<n && totaldata >0){
        scanf("%d",&datausage);
        totaldata = totaldata-datausage;
        
        if(totaldata>=0){
            count++;
        }
        else{
            totaldata=0;
            count++;
            break;
        }
        
        i++;
    
    }
        
    printf("\ndays Used:%d",count);
    printf("\nRemaining Data:%dGB",totaldata);
    return 0;
}
