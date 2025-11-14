#include <stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a[n*7],sum=0;
    for(int i=1;i<=n*7;i++){
        scanf("%d",&a[i]);
    }
    for(int i=1;i<=n*7;i++){
        sum+=a[i];
        if(i%7==0){
            printf("%d ",sum);
            sum=0;
        }
    }
    return 0;
}
