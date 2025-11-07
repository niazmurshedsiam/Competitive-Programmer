#include <bits/stdc++.h>
using namespace std;

int main() {
    int n,i;
    cin>>n;
    if(n<2){
        cout<<"-1"<<endl;
    }
    for(i=2;i<=n;i=i+2){
      if(i%2==0)
      {
        cout<<i<<endl;
      }


    }


    return 0;
}
