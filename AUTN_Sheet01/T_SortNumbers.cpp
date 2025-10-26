#include <bits/stdc++.h>
using namespace std;
int main() {
    long long a,b,c;

    cin>>a>>b>>c;
    int p = a;
    int q = b;
    int r = c;
    if(a>b){
        swap(b,a);
    }
    if(b>c){
        swap(c,b);
    }
    if(a>b){
        swap(b,a);
    }
    cout<<a<<endl<<b<<endl<<c<<endl<<endl;
    cout<<p<<endl<<q<<endl<<r<<endl;

    return 0;
}
