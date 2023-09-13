//백준 1703
#include <stdio.h>

int main(void) {
    while (1) {
        int k;
        scanf("%d", &k);

        if (k == 0) {
            break;
        }

        int seq[k * 2];
        for (int i = 0; i < k * 2; i++) {
            scanf("%d", &seq[i]);
        }

        int result = 1;
        for (int i = 0; i < k * 2; i += 2) {
            result = result * seq[i] - seq[i + 1];
        }

        printf("%d\n", result);
    }

    return 0;
}
