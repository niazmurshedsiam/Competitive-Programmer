#include<stdio.h>
int main(){
    int s[8];
    for(int i=0;i<8;i++){
        scanf("%d",&s[i]);
    }
    for(int i=0;i<8;i++){
        if(s[i]<s[i-1]){
            printf("No\n");
            return 0;
        }
        if(s[i]<100||s[i]>675){
            printf("No\n");
            return 0;
        }
        if(s[i]%25!=0){
            printf("No\n");
            return 0;
        }
    }
    printf("Yes\n");
    return 0;
}



