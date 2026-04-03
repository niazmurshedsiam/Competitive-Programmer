#include <iostream>
#include <string>
#include<sstream>
#include<set>
using namespace std;
int main()
{
    while(1){
        string temp;
        getline(cin,temp);
        if(temp=="#"){
            break;
        }
        stringstream ss(temp);
        string w;
        set<string>st;
        while(ss>>w){
            st.insert(w);
        }
        cout<<st.size()<<endl;
    }
}


