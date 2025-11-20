#include <bits/stdc++.h>
using namespace std;
int main() {
    int t,n,r;
    cin>>t;
    for(int i=1;i<=t;i++){
        cin>>n;
        if(n==0){
            cout<<"0";
        }
        while(n>0){
            r = n%10;
            cout<<" "<<r;
            n/=10;
        }
        cout<<endl;
    }

    return 0;
}
