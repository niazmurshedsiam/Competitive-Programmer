#include <stdio.h>
int main () {
	long long a, b;
	scanf("%lld%lld", &a, &b);
	long long x = (a + b - 1) / b;
	printf("%lld\n", x);
    return 0;
}
