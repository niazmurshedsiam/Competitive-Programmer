#include<stdio.h>
int main()
{
    int h,w;
    scanf("%d%d",&h,&w);
    char a[h][w];
    int temp;
    scanf("%c",&temp);
    for(int i=0;i<h;i++){
        for(int j=0;j<w;j++){
            scanf("%c",&a[i][j]);
        }
        scanf("%c",&temp);
    }
    int ans=0;

    for(int i=0;i<h;i++){
        for(int j=0;j<w;j++){
            if(a[i][j]=='#'){
                ans++;
            }
        }
    }
    printf("%d\n",ans);
    return 0;

}
