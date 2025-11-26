#include <bits/stdc++.h>
using namespace std;

int main() {
    long long int n,x,i,f;
    cin>>n;
    long long int a[n];
    for(i=0;i<n;i++){
        cin>>a[i];

    }
    cin>>x;
     f=0;
    for(i=0;i<n;i++){

        if(a[i]==x){
            f=1;
            break;
        }
    }
    if(f==1){
        cout<<i<<endl;
    }
    else{
        cout<<"-1"<<endl;
    }


    return 0;
}
