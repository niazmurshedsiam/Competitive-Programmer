#include <bits/stdc++.h>
using namespace std;
int main() {
    int n,even=0,odd=0,p=0,ne=0;
    cin>>n;
    for(int i=1; i<=n; i++){
        int a;
        cin>>a;
        if(a%2==0||a==0){
            even++;
        }
        else{
            odd++;
        }
        if(a>0){
            p++;
        }
        else if(a<0){
            ne++;
        }

    }
cout<<"Even: "<<even<<endl<<"Odd: "<<odd<<endl<<"Positive: "<<p<<endl<<"Negative: "<<ne;
    return 0;
}
