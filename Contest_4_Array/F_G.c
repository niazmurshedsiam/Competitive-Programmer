#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int h[n];
    for(int i=0;i<n;i++){
        scanf("%d",&h[i]);
    }
    int ans = h[0];
    for(int i=0;i<n;i++){
        if(h[i+1]>h[i]){
            ans = h[i+1];
        }
        else{
            break;
        }
    }
    printf("%d\n",ans);
    return 0;
}
