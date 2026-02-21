/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int n,capacity,hours,integers;
    int count=0;
    scanf("%d",&capacity);
    scanf("%d",&n);
    int change,i=0;
    int occupied =0;
    int threshold =(90*capacity)/100;
    while(i<n){
        scanf("%d",&change);
        occupied+=change;
        if(occupied>threshold){
            count++;
        }
        i++;
    }
    printf("\nFinal Occupied Beds:%d",occupied);
    printf("\nCritical Hours:%d",count);

    return 0;
}