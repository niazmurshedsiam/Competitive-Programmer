#include<stdio.h>
int main()
{
    int a,b;
    scanf("%d%d",&a, &b);
    int ans = (a+b+1)%10;
    printf("%d\n",ans);
    return 0;
}

