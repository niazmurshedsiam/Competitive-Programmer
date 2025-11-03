#include<stdio.h>
#include<limits.h>
int main()
{
    int t,n,a,b;
    scanf("%d",&t);
    for(int i=1;i<=t;i++){
        scanf("%d",&n);
    int max_quality = INT_MIN;
    int res_time =0;
        for(int j=1;j<=n;j++){
            scanf("%d%d",&a, &b);
            if(a>10){
               continue;
            }
            if(b>max_quality){
               max_quality = b;
               res_time = j;
            }

        }
    printf("%d\n",res_time);
    }
    return 0;

}
