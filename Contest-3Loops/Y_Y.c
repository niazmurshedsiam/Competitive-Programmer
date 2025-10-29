#include <stdio.h>

int main() {
    int t,n,x,d;
    scanf("%d",&t);
    for(int i = 1;i <= t; i++){
            scanf("%d%d%d",&n,&x,&d);
        int r = n/(x*5);
        int t = r + d;
        printf("%d\n",t);
    }


    return 0;
}
