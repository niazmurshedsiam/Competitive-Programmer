#include <bits/stdc++.h>
using namespace std;

int main() {
    long long int n;
    cin>>n;
    long long int a[n];
    for(int i=1;i<=n;i++){
        cin>>a[i];
    }
    long long int sum=0;
    for(int i=1;i<=n;i++){

            sum+=a[i];

    }
    cout<<abs(sum)<<endl;

    return 0;
}
