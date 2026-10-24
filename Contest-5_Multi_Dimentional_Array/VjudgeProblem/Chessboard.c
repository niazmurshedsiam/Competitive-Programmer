#include<stdio.h>
int main()
{
    char a[8][8];
    char temp;
    for(int row = 0; row < 8; row++){
        for(int col = 0; col < 8; col++){
            scanf("%c",&a[row][col]);
        }
        scanf("%c",&temp);
    }
    int r,c;
    for(int row = 0; row < 8; row++){
        for(int col = 0; col < 8; col++){
            if(a[row][col]== '*'){
                r = row, c = col;
                break;
            }
        }
    }
    printf("%c%d\n",97+c,8-r);
    return 0;
}
