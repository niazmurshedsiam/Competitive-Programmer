#include <bits/stdc++.h>
using namespace std;
int main() {
    int t,n;
    cin>>t;
    for(int i=1;i<=t;i++){
        long long r = 1;
        cin>>n;
        for(int j=1;j<=n;j++){

            r=r*j;
        }
        cout<<r<<endl;
    }


    return 0;
}
