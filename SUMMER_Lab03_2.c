//백준 1475
#include <stdio.h>

int main() {
    int counts[10] = {0};
    int num;
    int max_count = 0;

    scanf("%d", &num);

    if (num == 0) {
        printf("1\n");
        return 0;
    }

    while (num > 0) {
        int digit = num % 10;
        counts[digit]++;
        num /= 10;
    }

    counts[6] = (counts[6] + counts[9] + 1) / 2;
    counts[9] = 0;

    for (int i = 0; i < 10; i++) {
        if (counts[i] > max_count) {
            max_count = counts[i];
        }
    }

    printf("%d\n", max_count);

    return 0;
}
