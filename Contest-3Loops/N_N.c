#include <stdio.h>
int main(){
 int t,x,n;
 scanf("%d",&t);
 for(int i=1;i<=t;i++){
    scanf("%d%d",&x, &n);
    int r = (n+99)/100;
    if(x>r){
        printf("0\n");
    }
    else{
        printf("%d\n",r-x);
    }

 }
 return 0;
}
