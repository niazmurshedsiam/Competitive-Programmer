#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector<int> vec;
    for(int i=0;i<n;i++){
        int tem;
        cin>> tem;
        vec.push_back(tem);

    }

    reverse(vec.begin(),vec.end());
    for(int i=0;i<vec.size();i++){
        cout<<vec[i]<<" ";
    }
    cout<<endl;

    return 0;
}
