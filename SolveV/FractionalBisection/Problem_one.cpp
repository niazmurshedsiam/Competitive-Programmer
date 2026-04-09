#include<bits/stdc++.h>
using namespace std;
const double eps = 1e-7;
int main()
{
    double x; cin>>x;
    double l,r=x;
    while(abs(r-l)>eps)
    {
        double mid = (r+l)/2;
        if(mid*mid > x){
            r = mid;
        }
        else{
            l = mid;
        }
    }
    cout<<fixed<<setprecision(7)<<l<<endl;
}
