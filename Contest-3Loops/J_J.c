#include <stdio.h>
int main()
{
    int t,n,x;
    scanf("%d",&t);
    for(int i=1;i<=t;i++){
            scanf("%d %d",&n,&x);
            if(n<=x){
                printf("YES\n");
            }
            else{
                printf("NO\n");
            }
        }

    return 0;
}






