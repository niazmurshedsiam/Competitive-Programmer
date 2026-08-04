#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--){
        int n;
        scanf("%d",&n);
        int a[n];
        for(int i=1;i<=n;i++){
            scanf("%d",&a[i]);
        }
        int sum=0;
        for(int i=1;i<=n;i++){
            if(a[i]%2==1){
                sum++;
            }
        }
        printf("%d\n",sum);
    }
    return 0;
}
