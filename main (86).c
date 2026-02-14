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
     int count =0;
     for(; n!=0;n/=10){
        count++;
     }
     printf("%d",count);

    return 0;
}