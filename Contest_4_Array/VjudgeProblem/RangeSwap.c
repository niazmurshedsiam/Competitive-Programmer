#include<stdio.h>
int main(){
    int n,p,q,r,s;
    int a[101];
    scanf("%d %d %d %d %d",&n,&p,&q,&r,&s);
    for(int i=1;i<=n;i++){
        scanf("%d",&a[i]);
    }
    while(p<=q){
        int temp = a[p];
        a[p] = a[r];
        a[r]=temp;
        p++;
        r++;
    }
    for(int i=1;i<=n;i++){
        printf("%d",a[i]);
        if(i!=n){
            printf(" ");
        }
    }
    printf("\n");

    return 0;
}



