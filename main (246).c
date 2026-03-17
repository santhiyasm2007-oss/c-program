/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/                                    

#include <stdio.h>

int year(int (n)){
    
    if((n%4==0 && n%100!=0 )||(n%400==0)){
        return 1;
    }
    else{
        return 0;
    }
    
}
int main()
{
    int n,i;
    scanf("%d",&n);
    if(year(n)){
        printf("Leap year");
    }
    else{
        printf("Not leap year");
    }
    
    return 0;
}