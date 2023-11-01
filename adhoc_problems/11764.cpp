/* 11764 - Jumping Mario */
#include <stdio.h>

int main() {
    int tcase;
    scanf("%d", &tcase);

    for (int i = 1; i <= tcase; i++) {
        int alen;
        scanf("%d", &alen);
        int high = 0, low = 0;
        int prev;
        for (int j = 0; j < alen; j++) {
            int num;
            scanf("%d", &num);
            if (j != 0 && num > prev) high++;
            else if (j != 0 && num < prev) low++;
            prev = num;
        }
        printf("Case %d: %d %d\n", i, high, low);
    }

    return 0;
}