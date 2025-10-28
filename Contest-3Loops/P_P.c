#include <stdio.h>
int main(){
 int t,x,y,z;
 scanf("%d",&t);
 for(int i=1;i<=t;i++){
    scanf("%d%d%d",&x, &y, &z);
    int l = x*y;
    int r = z*24*60;
    if(l<=r){
        printf("YES\n");
    }
    else{
        printf("NO\n");
    }
 }
 return 0;
}
