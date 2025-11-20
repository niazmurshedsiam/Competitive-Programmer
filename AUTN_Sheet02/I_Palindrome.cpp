#include <bits/stdc++.h>
using namespace std;
int main() {
    int n,temp,x,r,flag,rem,count;
    cin>>x;
    count =10;
    r=0;
    temp=x;
    flag=0;
    while(x>0){
        rem=x%10;
        if(rem!=0){
            flag=1;
        }
        if(flag==1){
            cout<<" "<<rem;
        }
        x/=10;
        r= (r*count)+rem;
    }
    cout<<endl;
    if(temp==r){
        cout<<"YES";
    }
    else{
        cout<<"NO";
    }

    return 0;
}
