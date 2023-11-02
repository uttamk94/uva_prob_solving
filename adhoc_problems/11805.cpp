/* 11805 - Bafana Bafana */
#include <stdio.h>

int main() {
    int tcase;
    scanf("%d", &tcase);
    for (int t = 1; t <= tcase; t++) {
        int n, k, p;
        scanf("%d %d %d", &n, &k, &p);
        int res = (k + p) % n;
        printf("Case %d: %d\n", t, res ? res : n);
    }
    return 0;
}