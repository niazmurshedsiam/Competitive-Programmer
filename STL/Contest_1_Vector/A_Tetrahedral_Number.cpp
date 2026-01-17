#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int x,y,z;
    vector<vector<int>> v;
    for(x=0;x<=n;x++){
        for(y=0;y<=n;y++){
            for(z=0;z<=n;z++){
                if(x+y+z<=n)
                {
                    //vector<int> temp = {x,y,z};
                    v.push_back({x,y,z});
                }
            }
        }
    }
    sort(v.begin(),v.end());
    for(int i=0;i<v.size();i++){
        cout<<v[i][0]<< " "<<v[i][1]<<" "<<v[i][2]<<endl;
    }
    return 0;

}
