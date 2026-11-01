#include<stdio.h>
int main()
{
    int n,m;
    scanf("%d%d",&n,&m);
    char a[n][m];
    char temp;
    scanf("%c",&temp);
    for(int row = 0; row < n; row++){
        for(int col = 0; col < m; col++){
            scanf("%c",&a[row][col]);
        }
        scanf("%c",&temp);

    }

    int ans = 0;
    for(int row = 0; row < n; row++){
        for(int row2 = row+1; row2 < n; row2++){
            int flag = 1;
            for(int col = 0; col < m; col++){
                if(a[row][col] == 'x' && a[row2][col] == 'x'){
                    flag = 0;
                    break;
                }
            }
            if(flag == 1){
                ans++;
            }
        }

    }
    printf("%d\n",ans);
    return 0;

}
