#include<stdio.h>
#include<string.h>
int main()
{
    int n;
    scanf("%d",&n);
    char str[n];
    scanf("%s",str);
    char rev[n];
    for(int i = n-1,j=0;i>=0 && j<n;i--,j++){
        rev[j] = str[i];
    }
    rev[n] = '\0';
    if(strcmp(str,rev)==0){
        printf("Yes\n");
    }
    else{
        printf("No\n");
    }
    return 0;
}
