/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
int fact(int n){
    int i,ans =1;
    for(i=1;i<=n;i++)
    ans =ans*i;
    return ans;
}

int main()
{
    int num,rem,temp;
    int sum = 0;
    scanf("%d",&num);
    temp =num;
    
    while(num!=0){
        rem =num%10;
        sum+= fact(rem);
        num/=10;
    }
    if(sum == temp)
    printf("Yes");
    else
    printf("No");

    return 0;
    
}    