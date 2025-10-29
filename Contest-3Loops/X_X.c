#include <stdio.h>
#include <math.h>

int main() {
    int t;
    scanf("%d", &t);

    for(int i=1;i<=t;i++) {
        int x;
        scanf("%d", &x);

        double c = 0.20 * x;
        double r = 100.0 / c;

        int result = (int)ceil(r);
        printf("%d\n", result);
    }

    return 0;
}
