#include <stdio.h>
int main()
{
    int a,b,x,y;
    scanf("%d%d%d%d",&a, &b, &x, &y);
    int m = ((a*2)+(b*1));
    int r = ((x*2)+(y*1));
    if(m==r){
        printf("Equal\n");
    }
    else if(m>r){
        printf("Messi\n");
    }
    else if(r>m){
        printf("Ronaldo\n");
    }
    return 0;
}

