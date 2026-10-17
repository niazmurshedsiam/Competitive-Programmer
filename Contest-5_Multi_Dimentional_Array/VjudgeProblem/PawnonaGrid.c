#include<stdio.h>
int main()
{
    int h,w;
    char str[11];
    int cnt = 0;
    scanf("%d%d",&h,&w);
    for(int row = 1; row <= h; row++){
            scanf("%s",str);
        for(int col = 0; col < w; col++){
            if(str[col]== '#'){
                cnt++;
            }
        }
    }
    printf("%d\n",cnt);
}
