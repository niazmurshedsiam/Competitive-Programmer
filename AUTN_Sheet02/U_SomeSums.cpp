#include <bits/stdc++.h>
using namespace std;

int main() {
    int n,a,b,r;
    cin>>n>>a>>b;
    int t=0;
    for(int i=1;i<=n;i++){
        int x,sum=0;
        x=i;
        while(x>0){
            r=x%10;
            sum+=r;
            x/=10;
        }
        if(sum>=a&&sum<=b){
            t+=i;
        }

    }
    cout<<t<<endl;
    return 0;
}
