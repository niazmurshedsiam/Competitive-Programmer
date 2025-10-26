#include <bits/stdc++.h>
using namespace std;
int main()
{
    double x,y;
    cin>>x>>y;
    if(x>0&&y>0){
        cout<<"Q1\n"<<endl;
    }
    else if(x>0&&y<0){
       cout<<"Q4\n"<<endl;
    }
    else if(x<0&&y<0){
       cout<<"Q3\n"<<endl;
    }
    else if(x<0&&y>0){
       cout<<"Q2\n"<<endl;
    }
    else if(x==0&&y==0){
       cout<<"Origem\n"<<endl;
    }
     else if(y==0 && x !=0){
       cout<<"Eixo X\n"<<endl;
    }
     else if(x==0&&y!=0){
       cout<<"Eixo Y\n"<<endl;
    }

    return 0;

}
