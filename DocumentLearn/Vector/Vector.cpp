#include<bits/stdc++.h>
using namespace std;
int main()
{
   // vector<int> c = {1,2,3,4};
    //cout<<c.size()<<endl;
    //c.push_back(6);
    //cout<<c.back();
    //c.pop_back();
    //cout<<c.size();
    //cout<<c.front();
    //c.clear();
    //c.size();
    //if(c.empty()==true){
      //  cout<<"Yes";
    //}
    //else{
      //  cout<<"No";
    //}
    vector<int> c = {3,5,2,4,10,9};
    //sort(c.begin(),c.end());
   // sort(c.begin(),c.end(),greater<int>());
   //sort(c.begin()+1,c.end());
   //reverse(c.begin(),c.end());
    //for(int i=0;i<c.size();i++){
      //  cout<<c[i]<< " ";
    //}

    auto max = *max_element(c.begin(),c.end());
    cout<<max <<endl;
    auto min = *min_element(c.begin(),c.end());
    cout<<min <<endl;
    return 0;
}
