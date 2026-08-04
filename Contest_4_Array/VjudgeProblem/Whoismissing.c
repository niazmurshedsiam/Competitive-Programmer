#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int v = 4*n-1;
    int a[100001]={0};
    for(int i=0;i<v;i++){
        int x;
        scanf("%d",&x);
        a[x]++;
    }
    for(int i=1;i<=n;i++){
        if(a[i]==3){
            printf("%d\n",i);
            break;
        }
    }
   return 0;
}
