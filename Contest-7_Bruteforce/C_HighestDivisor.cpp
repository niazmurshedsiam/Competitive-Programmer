#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;
    scanf("%d",&n);
    for(int i=1;i<=10;i++){
        if(n%i==0){
           m=i;
        }
    }
    printf("%d\n",m);
    return 0;
}
