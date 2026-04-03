#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,q;
    cin>>n>>q;
    multiset<int>st;
    while(n--){
        int x;
        cin>>x;
        st.insert(x);
    }
    while(q--){
        int t;
        cin>>t;
        if(t==0){
            int x;
            cin>>x;
            st.insert(x);
        }
        else if(t==1){
            cout<<*st.begin()<<endl;
            st.erase(st.begin());
        }
        else{
            cout<<*(--st.end())<<endl;
            st.erase(--st.end());
        }

    }



}

