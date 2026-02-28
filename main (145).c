/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int capacity,n,load;
    int i=0,safe=0,fail=0;
    scanf("%d%d",&capacity,&n);
    while(i<n){
        scanf("%d",&load);
        if(load>capacity)
        fail++;
        else
        safe++;
        i++;
    }
    printf("\nsafe hour:%d",safe);
    printf("\nfailur count:%d",fail);

    return 0;
}