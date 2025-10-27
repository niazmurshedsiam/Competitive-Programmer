#include <stdio.h>
int main()
{
    int t,n;
    scanf("%d",&t);
    for(int i=1;i<=t;i++){
            scanf("%d",&n);
            if(n%3==0){
                printf("YES\n");
            }
            else{
                printf("NO\n");
            }
        }

    return 0;
}





