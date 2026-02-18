/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int salary,finalsalary;
    int absendays;
    scanf("%d",&salary);
    scanf("%d",&absendays);
    for(int i=0;i<salary;i++){
        
        finalsalary = salary-(absendays*100);
    }
        printf("%d",finalsalary);
    
    
    return 0;
}