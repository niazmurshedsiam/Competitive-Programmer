#include <stdio.h>
#include <math.h>
int main()
{
    int a,b;
    scanf("%d %d",&a,&b);
    int r = pow(a,b) + pow(b,a);
    printf("%d\n",r);
    return 0;
}
