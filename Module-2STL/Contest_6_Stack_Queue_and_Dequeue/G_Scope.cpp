#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    set<char>f;
    stack<string>e;
    string c;
    int ans=1;
    for(auto x:s){
        if(x=='(')
        {
            e.push(c);
            c="";

        }
        else if(x==')')
        {
            for(auto y:c)
            {
                f.erase(y);

            }
            c=e.top();
            e.pop();
        }
        else{
            if(f.count(x)){
                ans=0;
                break;
            }
            f.insert(x);
            c+=x;
        }

    }
     if(ans){
        cout<<"Yes"<<endl;
    }
    else{
        cout<<"No"<<endl;
    }

}
