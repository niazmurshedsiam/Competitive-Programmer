#include <bits/stdc++.h>
using namespace std;
int main() {
    double a,b,c,d,r,s;
    cin>>a>>b>>c>>d;
    r= b * log(a);
    s = d * log(c);
    if(r>s)
    {
        cout<<"YES"<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
    }
    return 0;
}
