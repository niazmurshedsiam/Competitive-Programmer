#include<stdio.h>
int main(){
    int n,m;
    int a[100];
    scanf("%d %d",&n,&m);
    for(int i=1;i<=n;i++){
        scanf("%d",&a[i]);
    }
    int sum = 0;
    for(int i=1;i<=m;i++){
        int index;
        scanf("%d",&index);
        sum = a[index]+sum;
    }
    printf("%d",sum);
    return 0;
}
