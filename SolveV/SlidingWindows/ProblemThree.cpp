#include <bits/stdc++.h>
using namespace std;
int main() {
    int a[]={5,4,1,3,7,9,2};
    int n=7,k=4;
    set<int>st;
    for(int i=0;i<k;i++){
        st.insert(a[i]);
    }
    cout<<*st.begin()<<" "<<*st.rbegin()<<endl;
    for(int i=0;i<n-k;i++){
        st.erase(a[i]);
        st.insert(a[i+k]);
        cout<<*st.begin()<<" "<<*st.rbegin()<<endl;
    }
}
