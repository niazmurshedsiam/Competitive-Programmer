#include <bits/stdc++.h>
using namespace std;
int main() {
   int n,x;
   char s;
   cin>>s;
   cin>>n;

   for(int i=1;i<=n;i++)
   {
     cin>>x;
     if(s){
         for(int j=1;j<=x;j++){
             cout<<s;
         }
     }
     cout<<endl;
   }

    return 0;
}
