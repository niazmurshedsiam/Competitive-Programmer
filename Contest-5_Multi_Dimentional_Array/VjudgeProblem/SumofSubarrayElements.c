#include<stdio.h>
int main()
{
    int n,m;
    scanf("%d%d",&n,&m);
    int a[n+1][m+1];
    for(int row = 1; row <= n; row++){
        for(int col = 1; col <= m; col++){
            scanf("%d",&a[row][col]);
        }
    }

    int r1,c1,r2,c2;
    scanf("%d%d%d%d",&r1,&c1,&r2,&c2);
    int ans = 0;
    for(int row = r1; row <= r2; row++){
        for(int col = c1; col <= c2; col++){
            ans += a[row][col];
        }
    }
    printf("%d\n",ans);
    return 0;

}

