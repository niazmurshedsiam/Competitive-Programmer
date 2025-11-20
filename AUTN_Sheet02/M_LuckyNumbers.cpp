#include <bits/stdc++.h>
using namespace std;
int main() {
    int n,m,i,flag;
    cin>>n>>m;
    int check =1;
    for(int i=n;i<=m;i++){
        flag=1;
        int temp=i;
        while(temp>0){
            int r = temp%10;
            if(r!=4&&r!=7){
                flag=0;
                break;
            }
            temp/=10;
        }
        if(flag==1){
            check=0;
            cout<<i<<" ";
        }
    }
    if(check==1){
        cout<<-1;
    }

    return 0;
}
