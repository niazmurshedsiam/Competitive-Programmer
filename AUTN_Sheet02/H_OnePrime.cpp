#include <bits/stdc++.h>
using namespace std;
int main() {
    int x;
    cin>>x;
    int f = 0;
    for(int i=2;i<x;i++){
        if(x%i==0){
            f=1;
        }
    }
    if(f==1){
        cout<<"NO"<<endl;
    }
    else{
       cout<<"YES"<<endl;
    }


    return 0;
}
