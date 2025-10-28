#include <stdio.h>
int main(){
 int t,x,y;
 scanf("%d",&t);
 for(int i=1;i<=t;i++){
    scanf("%d%d",&x, &y);
    int r = x / y;
    if(r>20){
        printf("20\n");
    }
    else {
            printf("%d\n",r);
        }
 }
 return 0;
}

