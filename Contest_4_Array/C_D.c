#include<stdio.h>
int main()
{
    int n,m;
    scanf("%d%d",&n,&m);
    int a[n],b[m];
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for(int i=0;i<m;i++){
        scanf("%d",&b[i]);
    }
    int sum=0;
    for(int i=0;i<m;i++){
        int index = b[i]-1;
        sum+=a[index];
    }
    printf("%d\n",sum);
    return 0;
}
