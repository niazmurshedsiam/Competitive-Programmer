#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);

    int D[101];
    for (int i = 1; i <= N; i++) {
        scanf("%d", &D[i]);
    }

    int ans = 0;

    for (int i = 1; i <= N; i++) {
        int month_ok = 1;
        int mdigit = i % 10;
        int x = i;

        while (x > 0) {
            if (x % 10 != mdigit) {
                month_ok = 0;
                break;
            }
            x /= 10;
        }

        if (!month_ok) continue;

        for (int j = 1; j <= D[i]; j++) {
            int day_ok = 1;
            int ddigit = j % 10;
            int y = j;

            while (y > 0) {
                if (y % 10 != ddigit) {
                    day_ok = 0;
                    break;
                }
                y /= 10;
            }

            if (day_ok && mdigit == ddigit)
                ans++;
        }
    }

    printf("%d\n", ans);

    return 0;
}
