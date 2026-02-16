/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.
   
*******************************************************************************/

#include <stdio.h>
#include<math.h>

int main()
{
    int i=0, n ,decimal=0,rem;
    scanf("%d",&n);
    while(n!=0){
        rem = n%10;
        decimal+= rem*pow(2,i);
        n= n/10;
        i++;
    }
    printf("%d",decimal);
    
    return 0;
}