#include<stdio.h>
#include<math.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n;
        scanf("%d",&n);
        int a[n];
        long long sum = 0;
        for(int i=0;i<n;i++){
            scanf("%d",&a[i]);
            sum+=a[i];
        }
        long long b = round(sqrt(sum * 1.0));
        if(b*b==sum)
        {
            printf("YES\n");
        }
        else{
            printf("NO\n");
        }

    }
    return 0;
}
