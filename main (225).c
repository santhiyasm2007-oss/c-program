/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
int main()
{
    int i=0, count=0;
    char name[100];
    scanf("%s",&name);
    
    while(name[i]!='\0'){
        
        if(name[i]=='A'||name[i]=='E'||name[i]=='I'||name[i]=='O'||name[i]=='U'){
            count++;
        }
        else if(name[i]=='a'||name[i]=='e'||name[i]=='i'||name[i]=='o'||name[i]=='u'){
            count++;
        }
        i++;
    }
    printf("%d",count);

    return 0;
}