#include<stdio.h>
int main()
{
    int n,m;
    scanf("%d%d",&n,&m);
    int a[n][m],b[n][m];
    int counter = 1;
    for(int row = 0; row < n; row++){
        for(int col = 0; col < m; col++){
            a[row][col] = counter;
            counter++;
        }
    }
    counter = 1;
    for(int col = 0; col < m; col++){
        for(int row = 0; row < n; row++){
            b[row][col] = counter;
            counter++;
        }
    }

    int ans = 0;

    for(int row = 0; row < n; row++){
        for(int col = 0; col < m; col++){
            if(a[row][col] == b[row][col]){
                ans++;
            }
        }
    }
    printf("%d\n",ans);
    return 0;
}
