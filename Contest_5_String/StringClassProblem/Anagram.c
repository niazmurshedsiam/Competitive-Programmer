#include<stdio.h>
#include<string.h>
int main()
{
    char str1[100],str2[100];
    scanf("%s %s",str1,str2);
    int n1 = strlen(str1);
    int n2 = strlen(str2);
    int f1[26] = {0}, f2[26] = {0};
    for(int i = 0; i< n1; i++)
    {
        int index = str1[i] - 'a';
        f1[index]++;
    }
    for(int i = 0; i< n2; i++)
    {
        int index = str2[i] - 'a';
        f2[index]++;
    }
    int p = 0;
     if(n1 != n2)
    {
        p = 1;
    }
    else
    {
        for(int i = 0; i < 26; i++)
        {
            if(f1[i] != f2[i])
            {
                p = 1;
                break;
            }
        }
    }

    if(p){
        printf("No\n");
    }
    else{
        printf("Yes\n");
    }
    return 0;
}
