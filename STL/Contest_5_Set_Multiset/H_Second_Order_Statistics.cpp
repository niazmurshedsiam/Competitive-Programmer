#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    set<int>st;
    while(n--){
        int x;
        cin>>x;
        st.insert(x);
    }
    int ans = 0;
    if(st.size()<2){
        cout<<"NO"<<endl;
    }
    else{
        for(auto it:st){
            if(ans==1){
                cout<<it<<endl;
            }
            ans++;
        }
    }

}

