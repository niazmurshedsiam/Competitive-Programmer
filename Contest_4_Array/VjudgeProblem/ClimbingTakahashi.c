#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int h[100001];
    for(int i=1;i<=n;i++){
        scanf("%d",&h[i]);
    }
    for(int i=1;i<=n;i++){
        if(h[i]>=h[i+1]){
            printf("%d\n",h[i]);
            return 0;
        }
    }
    printf("%d\n",h[n]);
    return 0;
}



