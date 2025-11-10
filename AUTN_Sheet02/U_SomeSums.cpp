// Online C++ compiler to run C++ program online
#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin>>n;
    if(n>=1) cout<<0;
    if(n>=2) cout<<" "<<1;
    long long a = 0,b =1;
    for(int i=3;i<=n;i++){
        long long r = a+b;
        cout<<" "<<r;
        a = b;
        b = r;
    }
    cout<<endl;
    return 0;
}
