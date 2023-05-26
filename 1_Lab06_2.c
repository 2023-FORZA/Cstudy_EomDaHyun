//백준 1037
#include <stdio.h>

int main() {
    int count;
    scanf("%d", &count);

    int max = 0;
    int min = 1000001;

    for (int i = 0; i < count; i++) {
        int divisor;
        scanf("%d", &divisor);

        if (divisor > max) {
            max = divisor;
        }
        if (divisor < min) {
            min = divisor;
        }
    }

    long long N = (long long)max * min;
    printf("%lld\n", N);

    return 0;
}
