#include <stdio.h>

int main() {
    int t;
    scanf("%d", &t);

    while (t--) {
        char ball1[2], ball2[2], ball3[2], ball4[2], ball5[2], ball6[2];
        scanf("%s %s %s %s %s %s", ball1, ball2, ball3, ball4, ball5, ball6);


        if ((ball1[0] == 'W' && ball2[0] == 'W' && ball3[0] == 'W') ||
            (ball2[0] == 'W' && ball3[0] == 'W' && ball4[0] == 'W') ||
            (ball3[0] == 'W' && ball4[0] == 'W' && ball5[0] == 'W') ||
            (ball4[0] == 'W' && ball5[0] == 'W' && ball6[0] == 'W')) {
            printf("YES\n");
        } else {
            printf("NO\n");
        }
    }

    return 0;
}
