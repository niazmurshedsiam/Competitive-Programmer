#include<stdio.h>
int main()
{
    int t,n;
    scanf("%d",&t);
    for(int i=1;i<=t;i++){
        scanf("%d",&n);
        if(n<=10){
            printf("Lower Double\n");
        }
        else if(n>=11 && n<=15){
            printf("Lower Single\n");
        }
        else if(n>=16 && n<=25){
            printf("Upper Double\n");
        }
        else{
            printf("Upper Single\n");
        }
    }
    return 0;
}
