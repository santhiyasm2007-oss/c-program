/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

float areacircle(int r){
    float area;
    area=3.14*r*r;
    return area;
}
int main()
{
     int r;
     float area;
     scanf("%d",&r);
     area = areacircle(r);
     printf("%.2f",area);

    return 0;
}