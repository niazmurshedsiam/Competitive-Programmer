#include <stdio.h>
#include <math.h>
int main()
{
    double pi = acos(-1);
    double r;
    scanf("%lf",&r);
    printf("%.6lf %.6lf\n",(double)pi*r*r,(double)2*pi*r);
    return 0;
}
