#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    set<int>st;
    while(n--){
        int x,y;
        cin>>x>>y;
        if(x==1){
            st.insert(y);
        }
        else if(x==2){
            st.erase(y);
        }
        else{
            if(st.count(y)){
                cout<<"Yes"<<endl;
            }
            else{
                cout<<"No"<<endl;
            }
        }
    }
}
