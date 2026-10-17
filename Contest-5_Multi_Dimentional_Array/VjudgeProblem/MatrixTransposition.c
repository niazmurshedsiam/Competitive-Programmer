#include<stdio.h>
int main()
{
    int h,w;
    scanf("%d%d",&h,&w);
    int arr[h][w];
    for(int row = 0; row < h; row++){
        for(int col = 0; col < w; col++){
            scanf("%d",&arr[row][col]);
        }
    }
    for(int col = 0; col < w; col++){
        for(int row = 0; row < h; row++){
            printf("%d ",arr[row][col]);
        }
        printf("\n");
    }
    return 0;
}
