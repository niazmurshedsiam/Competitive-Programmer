#include<stdio.h>
int main()
{
    int n,m;
    scanf("%d%d",&n,&m);
    int cnt = 0;
    char str[11];
    for(int row = 1;row<=n;row++){
        scanf("%s",str);
        for(int col = 0; col<=m; col++){
            if(str[col] == '#'){
                cnt++;
            }
        }
    }
    printf("%d\n",cnt);
    return 0;
}
