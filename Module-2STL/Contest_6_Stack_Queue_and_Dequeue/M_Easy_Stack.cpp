#include<bits/stdc++.h>
using namespace std;
int main(){
    stack<int>st;
    int n;
    cin>>n;
    while(n--){
        int k;
        cin>>k;
        if(k==1){
            int x;
            cin>>x;
            st.push(x);
        }
        else if(k==2){
            if(st.size()){
                st.pop();
            }
        }
        else{
            if(st.size()){
                cout<<st.top()<<endl;
            }
            else{
                cout<<"Empty!"<<endl;
            }
        }
    }

}




