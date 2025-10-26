#include <bits/stdc++.h>
using namespace std;
int main() {
    double n,a,b;
    int temp;
    cin>>n;
    a = n;
    temp = n;
    b = a-temp;
    if(b<=0){
        cout<<"int "<<temp<<endl;
    }
    else{
      cout<<"float "<<temp<<" "<<b<<endl;
    }
    return 0;
}
