#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--){
        int n;
        scanf("%d",&n);
        int a[n+1];
        for(int i=1;i<=n;i++){
            a[i]=0;
        }
        for(int i=1;i<=n;i++){
            int x;
            scanf("%d",&x);
            a[x]++;
        }
        int ans = -1;
        for(int i=1;i<=n;i++){
            if(a[i]>=3){
                ans = i;
                break;
            }
        }
        printf("%d\n",ans);
    }
    return 0;
}
