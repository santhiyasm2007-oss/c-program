/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.
   
*******************************************************************************/
#include <stdio.h>

int main()
{
    int n,i,j;
    int count =0,primecount =0;
    scanf("%d",&n);
    for(i=2;i<=n;i++){
        count=0;
        for(j=1;j<=i;j++){
            if(i%j ==0){
                count++;
            }
    }
    if(count ==2){
        primecount++;
    }
    }
    printf("%d",count);
    

    return 0;
}