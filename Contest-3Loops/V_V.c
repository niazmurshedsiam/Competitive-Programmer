#include <stdio.h>
int main(){
    int t,a1,a2,b1,b2,c;
    scanf("%d",&t);
    for(int i=1;i<=t;i++){
        scanf("%d%d%d%d",&a1, &a2, &b1, &b2);
        if((a2+b2)>(a1+b1))
        {
            printf("Yes\n");
        }
        else{
            printf("NO\n");
        }

    }
    return 0;
}

