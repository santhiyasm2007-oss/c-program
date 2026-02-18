/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int n;
    scanf("%d",&n);
    int total =0;
    int units;
    
    for(int i=0;i<n;i++){
        scanf("%d",&units);
        total += units;
    }
        printf("Total Units%d",total);
    
    
    return 0;
}