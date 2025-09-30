#include<stdio.h>
int main()
{
    int x,y;
    scanf("%d %d",&x,&y);
    if(x>y){
        if(x-y<=3){
            printf("Yes\n");
        }

        else{
            printf("No\n");
        }
    }
    else if(y>x){

        if(y-x<=2){
            printf("Yes\n");
        }

        else{
            printf("No\n");
        }
    }

}
