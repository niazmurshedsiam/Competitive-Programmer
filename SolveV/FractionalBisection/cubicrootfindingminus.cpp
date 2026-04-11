#include<bits/stdc++.h>
using namespace std;
const double eps = 1e-7;
int main()
{
    double x;
    cin>>x;
    double oxe = x;
    if(x<0) x = -x;
    double l = 0, r=max(1.0,x);
    for(int step=0;step<50;++step){
        double mid = (r+l)/2;
        if(mid*mid*mid>x){
            r = mid;
        }
        else{
            l =mid;
        }
    }
    if(oxe<0){
            cout<<fixed<<setprecision(7)<<-l<<endl;

    }
    else cout<<fixed<<setprecision(7)<<l<<endl;
}

