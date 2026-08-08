#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n;
        scanf("%d",&n);
        int a[10];
        for(int i=1;i<=n;i++){
            scanf("%d",&a[i]);
        }
        int ans = 0;
        for(int i=1;i<=n;i++){
            int product = 1;
            for(int j=1;j<=n;j++){
                if(i==j){
                    product*=(a[j]+1);
                }
                else{
                    product*=a[j];
                }

            }
            if(product>ans){
                ans = product;
            }
        }
        printf("%d\n",ans);

    }
    return 0;
}
