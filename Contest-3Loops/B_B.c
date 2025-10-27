#include <stdio.h>
int main()
{
    int t,n,m;
    scanf("%d",&t);
    for(int i=1;i<=t;i++){
        scanf("%d %d",&n,&m);
        int r = n-m;
        if(r<0){
            printf("0\n");
        }
        else{
            printf("%d\n",n-m);
        }
    }
    return 0;
}

