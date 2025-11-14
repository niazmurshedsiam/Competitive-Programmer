#include<stdio.h>
int main()
{
    int n,k;
    scanf("%d%d",&n,&k);
    int a[n];
    for(int i=0;i<n;i++){
       scanf("%d",&a[i]);
    }
    int index = n-k;
    for(int i=index;i<=n-1;i++){
        printf("%d ",a[i]);
    }
    for(int i=0;i<=index-1;i++)
    {
        printf("%d ",a[i]);
    }
    printf("\n");
    return 0;

}
