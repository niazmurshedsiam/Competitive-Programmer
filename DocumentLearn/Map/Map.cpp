#include<bits/stdc++.h>
using namespace std;
int main()
{
    //map<string,int>mp;
    //mp.insert({"Abir",30});
    //mp.insert({"kbir",40});
    //mp.insert({"lbir",50});
    //mp.insert({"Abir",30});
    //mp["Abir"]=20;
    //for(auto item:mp)
    //{
      //  cout<<item.first<<" "<<item.second<<endl;
    //}

   // cout<<mp["Abir"]<<endl;

    //if(mp.count("Abir")>0)
    //{
      //   cout<<"Yes"<<endl;
    //}
    //else
    //{
     //       cout<<"No"<<endl;
    //}

    int n;
    cin>>n;
    string s;
    cin>>s;
    map<char,int>mp;
    for(int i=0;i<n;i++){
        mp[s[i]]++;
    }
    for(auto it:mp){
        cout<<it.first<<" "<<it.second<<endl;
    }
}
