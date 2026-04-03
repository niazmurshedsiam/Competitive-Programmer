#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;
    while(cin>>n){
        cin>>m;
        set<int>st;
        int x;
        while(n--)
        {
            cin>>x;
            st.insert(x);
        }
        while(m--)
        {
            cin>>x;
            st.insert(x);
        }
        for(auto it:st){
            cout<<it<<' ';
        }
        cout<<endl;
    }
}
