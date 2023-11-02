/* 11614 - Etruscan Warriors Never Play Chess */

#include <stdio.h>


int main() {
    int tcase;
    scanf("%d", &tcase);
    while (tcase--) {
        long long ll;
        scanf("%lld", &ll);
        int ccount = 0;
        while (ll) {
            //printf(":: %lld\n", ll);
            ll >>= 1;
            ccount++;
        }
        printf("%d\n", ccount);
    }
    return 0;
}