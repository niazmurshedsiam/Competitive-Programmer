#include<stdio.h>
int main()
{
    int n,d;
    scanf("%d%d",&n,&d);
    char a[n][d];
    char temp;
    scanf("%c",&temp);
    for(int row = 0;row < n;row++){
        for(int col = 0; col < d;col++){
            scanf("%c",&a[row][col]);
        }
        scanf("%c",&temp);
    }
    int free[d];
    for(int col = 0; col < d;col++){
        int got = 0;
        for(int row = 0; row < n; row++){
            if(a[row][col] == 'x'){
                got = 1;
                break;
            }
        }
        if(got == 1) {
            free[col] = 0;
        }
        else{
            free[col] = 1;
        }
    }


     int ans=0;

    for(int col = 0; col < d; col++){
        if(free[col]== 1){
            int len = 1;
            for(int col2 = col + 1; col2 < d; col2++){
                if(free[col2]== 1){
                    len++;
                }
                else{
                    break;
                }
            }
            if(len>ans){
                ans=len;
            }
        }
    }

    printf("%d\n",ans);
    return 0;
}
