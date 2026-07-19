#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int range = 7*n;
    int a[100001];
    for(int i=1;i<=range;i++){
        scanf("%d",&a[i]);
    }
    for(int i=0;i<n;i++){
        int start = 7*i+1;
        int end = start+6;
        int sum = 0;
        for(int j=start;j<=end;j++){
            sum = sum+a[j];
        }
        printf("%d ",sum);
    }

    return 0;
}



