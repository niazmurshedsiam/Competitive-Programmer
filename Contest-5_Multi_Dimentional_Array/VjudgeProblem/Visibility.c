#include<stdio.h>
int main()
{
    int h,w,x,y;
    scanf("%d%d%d%d",&h,&w,&x,&y);
    x--,y--;
    char a[h][w];
    char temp;
    scanf("%c",&temp);
    for(int row = 0; row < h; row++){
        for(int col = 0; col < w; col++){
            scanf("%c",&a[row][col]);
        }
        scanf("%c",&temp);
    }
    int ans = 1;
    for(int col = y+1; col < w; col++){
        if(a[x][col] == '.'){
            ans++;
        }
        else{
            break;
        }
    }

    for(int col = y - 1; col >= 0; col--){
        if(a[x][col]=='.'){
            ans++;
        }
        else{
            break;
        }
    }
    for(int row = x+1; row < h; row++){
        if(a[row][y]=='.'){
            ans++;
        }
        else{
            break;
        }
    }
    for(int row = x-1; row >= 0; row--){
        if(a[row][y]=='.'){
            ans++;
        }
        else{
            break;
        }
    }
    printf("%d\n",ans);
    return 0;
}
