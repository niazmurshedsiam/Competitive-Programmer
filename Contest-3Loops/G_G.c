#include <stdio.h>
int main()
{
    int n,x,s,r=0;
    scanf("%d %d",&n,&x);
    for(int i=1;i<=n;i++){
        scanf("%d",&s);
        if(s<=x){
            r = r+s;
        }
    }
    printf("%d\n",r);
    return 0;
}



