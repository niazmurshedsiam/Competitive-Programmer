#include <stdio.h>
int main(){
    int t,n,x;
    scanf("%d",&t);
    for(int i=1;i<=t;i++){
        scanf("%d%d",&n, &x);
        int r = x - (2*n-x);
        if(r<0){
            r = 0;
        }

    printf("%d\n",r);

    }
    return 0;
}
