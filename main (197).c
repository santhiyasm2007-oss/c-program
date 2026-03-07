/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
#include <stdio.h>
int main() {
    int R, C;
    scanf("%d %d", &R, &C);
    int a[R][C];
    for(int i=0;i<R;i++){
        for(int j=0;j<C;j++){
            scanf("%d",&a[i][j]);
        }
    }
    int maxUnique = 0;
    int deptIndex = 0;
    for(int i=0;i<R;i++){
        int uniqueCount = 0;
        for(int j=0;j<C;j++){
            int isUnique = 1;
            for(int k=0;k<C;k++){
                if(j!=k && a[i][j]==a[i][k]){
                    isUnique = 0;
                    break;
                }
            }
            if(isUnique)
                uniqueCount++;
        }
        if(uniqueCount > maxUnique){
            maxUnique = uniqueCount;
            deptIndex = i;
        }
    }
    printf("%d", deptIndex);
    return 0;
}