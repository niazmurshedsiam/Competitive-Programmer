#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector<string> v;
    for(int i=0;i<n;i++){
        string temp;
        cin>>temp;
        v.push_back(temp);
    }
    reverse(v.begin(),v.end());
    for(int i=0;i<n;i++){
        cout<<v[i]<<endl;
    }
    return 0;
}

