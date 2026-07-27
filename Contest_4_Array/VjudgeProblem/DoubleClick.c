#include<stdio.h>
int main(){
    int n,d;
    scanf("%d %d",&n,&d);
    int t[100];
    for(int i=1;i<=n;i++){
        scanf("%d",&t[i]);
    }
    for(int i=2;i<=n;i++){

        if(t[i]-t[i-1]<=d){
            printf("%d\n",t[i]);
            return 0;
        }

    }
    printf("-1\n");

    return 0;
}


