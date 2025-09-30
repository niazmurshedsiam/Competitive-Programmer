#include<stdio.h>
int main(){
int i,j,n,z,space_count;
printf("Enter Your Input = ");
scanf("%d",&n);
for(i=1;i<=n;i=i+2)
    {
        space_count =(n-i)/2;
        for(z=1; z<=space_count;z++){
            printf(" ");
        }
        for(j=1;j<=i;j++){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}
