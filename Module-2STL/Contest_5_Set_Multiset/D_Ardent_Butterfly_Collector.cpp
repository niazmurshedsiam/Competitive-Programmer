#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    set<int> st;

    while(n--){
        int x;
        cin>>x;
        st.insert(x);

    }
    int y;
    cin>>y;
    while(y--){
        int x;
        cin>>x;
        if(st.count(x))
        {
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
}
