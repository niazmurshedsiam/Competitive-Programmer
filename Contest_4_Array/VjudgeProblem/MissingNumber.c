#include<stdio.h>
int main(){
    int n;
    int a[200001];
    scanf("%d",&n);

    for(int i=1;i<=n-1;i++){
        int x;
        scanf("%d",&x);
        a[x]=1;
    }
    for(int i=1;i<=n;i++){
        if(!a[i]){
            printf("%d\n",i);
            break;
        }
    }

    return 0;
}



