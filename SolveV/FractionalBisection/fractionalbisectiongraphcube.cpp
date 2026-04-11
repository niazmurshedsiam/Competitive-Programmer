#include <bits/stdc++.h>

using namespace std;



double f(double x) //any polynomial
{
    double res = x*x*x + x*x*5.0 - x*4.0 + 3.0;
    return res;
}


int main()
{
    double x1 = 1.0, x2 = -10;

    //f(x1) > 0 and f(x2) < 0

    for(int step = 0; step < 50; ++step)
    {
        double mid = (x1+x2)/2.0;

        if(f(mid)>0)
        {
            x1 = mid;
        }
        else
        {
            x2 = mid;
        }
    }

    cout<<fixed<<setprecision(7)<<x1<<endl;
    cout<<f(x1)<<endl;
}
