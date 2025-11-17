#include<stdio.h>
int a[100001];
int main()
{
    int n;
    int card;
    scanf("%d",&n);
    for(int i=0;i<4*n-1;i++){
        scanf("%d",&card);
        a[card]++;
    }
    int sum=0;
    for(int i=1;i<=n;i++){
        if(a[i]!=4){
            sum = i;
        }
    }
    printf("%d\n",sum);
    return 0;
}
