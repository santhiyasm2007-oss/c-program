

#include <stdio.h>
 
int main()
{
    int a,b;
    int c,d;
    int e,f;
    
    scanf("%d %d", &a,&b);
    scanf("%d %d", &c,&d);
    scanf("%d %d", &e,&f);

    printf(" Quotient =%d Reminter =%d", a/b,a%b);
    printf("\nQuotient =%d Reminter =%d" ,c/d,c%d);
    printf("\nQuotient =%d Reminter =%d",e/f,e%f);
    
    

    return 0;
}