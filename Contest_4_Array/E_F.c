#include<stdio.h>
int main()
{
    int a[8];
    for(int i=0;i<8;i++){
        scanf("%d",&a[i]);
    }
    int flag=1;
    for(int i=0;i<8;i++){
        if(a[i]<100 || a[i]>675){
            flag =0;
            break;
        }
    }
     for(int i=0;i<8;i++){
        if(a[i]%25!=0){
            flag =0;
            break;
        }
    }
    for(int i=0;i<7;i++){
        if(a[i]>a[i+1]){
            flag =0;
            break;
        }
    }
    if(flag==1){
        printf("Yes\n");
    }
    else{
        printf("No\n");
    }
}
