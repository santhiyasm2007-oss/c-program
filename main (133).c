/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main(){
    
    int mweight,sum=0,num,weight;
    scanf("%d",&mweight);
    scanf("%d",&num);
    int i=0,count=0,totalweight=0,overload=0;
    while(i<num){
        scanf("%d",&weight);
        if(totalweight+weight>mweight){
            overload=1;
            break;
        }
        
        totalweight+=weight;
        count++;

        i++;
    }
    
    printf("\nPassengers Allowed:%d",count);
    if(weight<count){
        printf("\nOverload:No");
    }
    else{
        printf("\nOverload:Yes");
    }

    
    return 0;
}