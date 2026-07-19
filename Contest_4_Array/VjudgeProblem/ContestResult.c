#include<stdio.h>
int main(){
    int n,m;
    scanf("%d %d",&n,&m);
    int a[101];
    for(int i=1;i<=n;i++){
        scanf("%d",&a[i]);
    }
    int sum =0;
    for(int i=1;i<=m;i++){
        int x;
        scanf("%d",&x);
        sum = sum + a[x];

    }
    printf("%d\n",sum);

    return 0;
}



