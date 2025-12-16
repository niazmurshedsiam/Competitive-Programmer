#include<stdio.h>
#include <stdbool.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int m;
        scanf("%d",&m);
        int value;
        bool isBeautiful = false;
        for(int i=1;i<=m;i++){
            scanf("%d",&value);
            if(value<=i){
                isBeautiful = true;
            }
        }
        if(isBeautiful==true){
            printf("YES\n");
        }
        else{
            printf("NO\n");
        }

    }
    return 0;
}
