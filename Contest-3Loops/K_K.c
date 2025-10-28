#include <stdio.h>

int main() {
    int K, G, M;
    scanf("%d %d %d", &K, &G, &M);

    int glass = 0, mug = 0;

    for (int i = 0; i < K; i++) {
        if (glass == G) {

            glass = 0;
        } else if (mug == 0) {
            mug = M;
        } else {

            int transfer = G - glass;
            if (transfer > mug) {
                transfer = mug;
            }
            glass += transfer;
            mug -= transfer;
        }
    }

    printf("%d %d\n", glass, mug);
    return 0;
}
