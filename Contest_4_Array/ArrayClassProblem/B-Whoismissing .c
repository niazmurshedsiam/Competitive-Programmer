#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int a[100001] = {0};
    int x;

    for (int i = 1; i <= 4 * n - 1; i++) {
        scanf("%d", &x);
        a[x]++;
    }

    for (int i = 1; i <= n; i++) {
        if (a[i] == 3) {
            printf("%d\n", i);
            break;
        }
    }

    return 0;
}
