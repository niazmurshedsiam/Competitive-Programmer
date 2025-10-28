#include <stdio.h>
int main(){
 int t,x,y,z;
 scanf("%d",&t);
 for(int i=1;i<=t;i++){
    scanf("%d%d%d",&x, &y, &z);
    int total = x * y;
    if((2*z)>total){
        printf("YES\n");
    }
    else{
        printf("NO\n");
    }
 }
 return 0;
}
