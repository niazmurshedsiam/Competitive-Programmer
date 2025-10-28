#include <stdio.h>
int main(){
 int t,n,k;
 scanf("%d",&t);
 for(int i=1;i<=t;i++){
    scanf("%d%d",&n, &k);
    int total = k+1;
    int totalV = n/total;
    int totalM = k*totalV;
    int r = n - totalM;
    printf("%d\n",r);
 }
 return 0;
}
