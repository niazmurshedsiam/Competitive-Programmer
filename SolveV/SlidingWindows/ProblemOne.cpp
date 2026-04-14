#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a[]={5,4,1,3,7,9,2};
    int n=7,k=4;
    for(int i=0;i<n-k+1;i++){
            int sum=0;
        for(int j=i;j<i+k;j++){
            sum+=a[j];
        }
        cout<<sum<<endl;
    }

}
