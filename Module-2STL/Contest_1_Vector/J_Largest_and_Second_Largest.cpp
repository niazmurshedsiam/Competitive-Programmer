#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> v(n);
        for(int i=0;i<n;i++){
            cin>>v[i];
        }
        int mx1 = * max_element(v.begin(),v.end());
        vector<int> b;
        for(int i=0;i<n;i++){
            if(v[i]!=mx1){
                b.push_back(v[i]);
            }
        }
        int mx2 = * max_element(b.begin(),b.end());
        int ans = mx1+mx2;
        cout<<ans<<endl;
    }
    return 0;
}

