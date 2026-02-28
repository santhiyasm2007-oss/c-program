/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.*/

#include <stdio.h>

int main() {
    int n,i=0,x,u=0,count=0,b=0;
    scanf("%d",&n);

    while(i<n){
        scanf("%d",&x);
        if(x>70){
            u++; 
            count++;
            if(count==3 && b==0) b=i+1;
        } else count=0;
        i++;
    }

    if(b==0)
        printf("Breakdown At Reading: Not Occurred\n");
    else
        printf("Breakdown At Reading: %d\n",b);

    printf("Unsafe Readings: %d\n",u);
    return 0;
}