#include <bits/stdc++.h>
using namespace std;
int main() {
      int n,x,sum,count;
      cin>>n;
      for(int i=1;i<=n;i++){
          scanf("%d",&x);
          count =0;
          while(x>0){
              count+=x%2;
              x/=2;
          }
          sum = pow(2,count)-1;
          cout<<sum<<endl;
      }

    return 0;
}
