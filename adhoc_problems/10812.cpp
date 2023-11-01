/* 10812 - Beat the Spread! */
#include <stdio.h>

int main() {
    int tcase;
    scanf("%d", &tcase);
    while (tcase--) {
        int x, y;
        scanf("%d %d", &x, &y);
        do {
            if (x < y) {    printf("impossible\n");     break;}
            
            int sum = x + y;
            if (sum & 1) {  printf("impossible\n");     break;}
            else sum >>= 1;
            
            int diff = (x-y) ? x-y : y-x;
            if (diff & 1) { printf("impossible\n");     break;}
            else diff >>= 1;
                            printf("%d %d\n", sum, diff);
        } while (0);
    }
    return 0;
}