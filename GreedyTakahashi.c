#include<stdio.h>
int main()
{
    long long int a,b,k;
    scanf("%lld %lld %lld",&a,&b,&k);
    if(k<=a){
        printf("%lld %lld\n",a-k,b);
    }
    else{
        long long int x = k-a;
        if(x<=b){
            printf("%lld %lld\n",0,b-x);
        }
        else{
            printf("0 0\n");
        }
    }
    return 0;
}


