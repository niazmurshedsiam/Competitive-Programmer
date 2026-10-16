#include<stdio.h>
int main()
{
    int a[101][101];
    int n,m;
    scanf("%d%d",&n,&m);
    for(int row = 1;row <= n; row++){
        for(int col = 1;col<=m; col++){
            scanf("%d",&a[row][col]);
        }
    }
    int vec[101],ans[101];
    for(int i=1;i<=m;i++){
        scanf("%d",&vec[i]);
    }
    for(int row=1;row<=n;row++){
        int result = 0;
        for(int i=1;i<=m;i++){
            result += vec[i] * a[row][i];
        }
        ans[row] = result;
    }
    for(int row=1;row<=n;row++){
        printf("%d\n",ans[row]);
    }
    return 0;
}
