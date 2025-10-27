#include <stdio.h>

int main() {
    int t, k;
    scanf("%d", &t);

    while (t--) {
        scanf("%d", &k);

        int count = 0;
        int n = 1;

        while (count < k) {
            if (n % 3 != 0 && n % 10 != 3) {
                count++;
                if (count == k) {
                    printf("%d\n", n);
                    break;
                }
            }
            n++;
        }
    }

    return 0;
}
