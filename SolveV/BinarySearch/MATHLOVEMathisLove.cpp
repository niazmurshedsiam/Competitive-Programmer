#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        long long y; cin>>y;
        long long  l =0,r=100000;
        long long ans = -1;
        while(l<=r){
            long long mid = l+(r-l)/2;
            long long val = (mid*(mid+1))/2;
            if(val==y){
                ans = mid;
                break;
            }
            else if(val>y){
                r=mid-1;
            }
            else{
                l =mid+1;
            }
        }
        if(ans!=-1) cout<<ans<<endl;
        else cout<<"NAI"<<endl;
    }
}
