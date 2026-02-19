/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int n,totalcap,count=0;
    int capacity,sum=0;
    scanf("%d",&totalcap);
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d",&capacity);  
        totalcap -= capacity;
        if(totalcap<0){
        count++;
        }
    
    }
    printf("\nRemaining Capacity:%d",totalcap);
    printf("\nOverflow  Days:%d",count);


    return 0;
}