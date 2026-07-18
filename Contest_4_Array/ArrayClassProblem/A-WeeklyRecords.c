#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int a[100000];
    int range = 7*n;

    for(int i=1;i<=range;i++){
        scanf("%d",&a[i]);
    }

    for(int j=0;j<n;j++)
    {
        int sum = 0;
        int start = 7*j+1;
        int end = start + 6;
        for(int i= start;i<=end;i++){
            sum = sum + a[i];
        }
        printf("%d ",sum);

    }


    return 0;
}



