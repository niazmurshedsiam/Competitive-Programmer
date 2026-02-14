#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k;
    cin>>n>>k;
    set<int>st;
    while(n--){
        int x;
        cin>>x;
        st.insert(x);
    }
    int ans=0;
    for(auto y:st){
        ans+=st.count(y-k);
    }
    cout<<ans<<endl;


}
