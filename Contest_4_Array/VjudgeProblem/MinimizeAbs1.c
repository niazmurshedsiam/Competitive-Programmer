#include<stdio.h>
int main()
{
    int n,l,r;
    scanf("%d %d %d",&n,&l,&r);
    int a[n];
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for(int i=0;i<n;i++){
        if(a[i]<l){
            printf("%d ",l);
        }
        else if(l<=a[i]&&a[i]<=r){
            printf("%d ",a[i]);
        }
        else{
            printf("%d ",r);
        }
    }
    printf("\n");
    return 0;
}
