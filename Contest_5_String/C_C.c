#include<stdio.h>
#include<string.h>
int main()
{
    char s[101];
    scanf("%s",s);
    int n = strlen(s);
    for(int i=0;i<n;i++){
        printf("%c",s[i]);
        printf(" ");

    }
    return 0;
}
