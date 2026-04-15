#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a[]={5,4,1,3,7,9,2};
    int n=7,k=4;
    int sum=0;
    for(int i=0;i<k;i++)
    {
        sum+=a[i];
    }
    cout<<sum<<endl;
    for(int i=0;i<n-k;i++){
        sum-=a[i];
        sum+=a[i+k];
        cout<<sum<<endl;
    }

}
