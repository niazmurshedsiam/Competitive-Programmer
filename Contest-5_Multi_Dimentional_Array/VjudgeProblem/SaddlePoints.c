#include<stdio.h>
int main()
{
    int n,m;
    scanf("%d%d",&n,&m);
    int a[n][m];
    for(int row = 0; row < n; row++){
        for(int col = 0; col < m; col++){
            scanf("%d",&a[row][col]);
        }
    }
    int mx[m], mn[n];

    for(int col = 0; col < m; col++){
         mx[col] = -2000;
        for(int row = 0; row < n; row++){
            if(a[row][col] > mx[col]){
                mx[col] = a[row][col];
            }
        }
    }
    for(int row = 0; row < n; row++){
             mn[row] = 2000;
        for(int col = 0; col < m; col++){
            if(a[row][col] < mn[row]){
                mn[row] = a[row][col];
            }
        }
    }
    int ans = 0;
    for(int row = 0; row < n; row++){
        for(int col = 0; col < m; col++){
            if(a[row][col]== mx[row] && a[row][col] == mn[col]){
                ans++;
            }
        }
    }
    printf("%d\n",ans);
    return 0;
}
