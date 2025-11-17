#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a[20001];
    int x;
    for(int i=0;i<n-1;i++){
        scanf("%d",&x);
        a[x]=1;
    }

    for(int i=1;i<n;i++){
        if(a[i]==0){
            printf("%d\n", i);
        }
    }
    return 0;
}
