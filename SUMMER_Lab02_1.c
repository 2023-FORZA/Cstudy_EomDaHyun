//백준 1110
#include <stdio.h>

int main() {
    int N, original, K, cycle = 0;
    scanf("%d", &N);
    original = N;

    while (1) {
        int tens = N / 10;
        int ones = N % 10;
        int sum = tens + ones;
        K = ones * 10 + sum % 10;
        N = K;
        cycle++;

        if (N == original)
            break;
    }

    printf("%d\n", cycle);
    return 0;
}
