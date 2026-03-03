/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/#include <stdio.h>

int main()
{
    int n, k, i;
    
    scanf("%d", &n);
    
    int arr[n], temp[n];
    
    for(i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    
    scanf("%d", &k);
    
    for(i = 0; i < n; i++)
    {
        temp[i] = arr[(i + k) % n];
    }
    
    for(i = 0; i < n; i++)
    {
        printf("%d ", temp[i]);
    }

    return 0;
}