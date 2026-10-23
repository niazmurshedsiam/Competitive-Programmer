#include<stdio.h>
int main()
{
    int x,n;
    scanf("%d%d",&x,&n);
    int a[n][n];
    for(int row = 0; row < n; row++){
        for(int col = 0; col < n; col++){
            scanf("%d",&a[row][col]);
        }
    }
    for(int col = 0; col < n; col++){
        int flag = 0;
        for(int row = 0; row < n; row++)
        {

            if(a[row][col]== x){
                flag = 1;
            }
        }
        if(flag == 1){
            printf("YES\n");
        }
        else{
            printf("NO\n");
        }
    }

    return 0;
}
