#include <stdio.h>
#include <stdlib.h>

struct triangle {
    int a;
    int b;
    int c;
};

typedef struct triangle triangle;

/* Returns squared area using Heron's formula */
long long area(triangle t) {
    long long s = (t.a + t.b + t.c) / 2;
    return s * (s - t.a) * (s - t.b) * (s - t.c);
}

/* qsort comparison function */
int cmp(const void *x, const void *y) {
    const triangle *t1 = (const triangle *)x;
    const triangle *t2 = (const triangle *)y;

    long long area1 = area(*t1);
    long long area2 = area(*t2);

    if (area1 < area2) return -1;
    if (area1 > area2) return 1;
    return 0;
}

void sort_by_area(triangle *tr, int n) {
    qsort(tr, n, sizeof(triangle), cmp);
}

int main() {
    int n;
    scanf("%d", &n);

    /* Cast malloc because file is compiled as C++ */
    triangle *tr = (triangle *)malloc(n * sizeof(triangle));
    if (tr == NULL) return 1;

    for (int i = 0; i < n; i++) {
        scanf("%d %d %d", &tr[i].a, &tr[i].b, &tr[i].c);
    }

    sort_by_area(tr, n);

    for (int i = 0; i < n; i++) {
        printf("%d %d %d\n", tr[i].a, tr[i].b, tr[i].c);
    }

    free(tr);
    return 0;
}
