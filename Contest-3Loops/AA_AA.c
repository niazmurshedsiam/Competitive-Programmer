#include <stdio.h>
int main(){
    int t,n;
    scanf("%d",&t);
    for(int i=1;i<=t;i++){
        scanf("%d",&n);

        if(n%2==0||n==1){
            printf("YES\n");
        }
        else{
            printf("NO\n");
        }

    }
    return 0;
}


