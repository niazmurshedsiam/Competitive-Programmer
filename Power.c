#include<stdio.h>
#include<math.h>
int main(){
int A,B;
scanf("%d %d",&A,&B);


int res = pow(A,B) + pow(B,A);
printf("%d",res);
return 0;
}
