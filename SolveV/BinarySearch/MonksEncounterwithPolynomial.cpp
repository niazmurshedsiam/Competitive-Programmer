#include<bits/stdc++.h>
using namespace std;

long long A,B,C,K;
bool fun(long long x){
 long long val = A*x*x + B*x + C;
 if(val>=K) return true;
 else return false;
}
int main()
{
    int t;
    cin>>t;
    while(t--){
        cin>>A>>B>>C>>K;
        long long l=0,r=100000;
        long long ans = -1;
        while(l<=r){
            long long mid = l+(r-l)/2;

            if(fun(mid)==true){
                ans = mid;
                r=mid;
            }

            else{
                l =mid+1;
            }
        }
        cout<<ans<<endl;
    }
}
