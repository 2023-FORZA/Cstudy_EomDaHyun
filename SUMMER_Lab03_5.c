//백준 9550
#include <stdio.h>

int main() {
    int T;
    scanf("%d", &T);

    for (int t = 0; t < T; t++) {
        int N, K;
        scanf("%d %d", &N, &K);

        int candies[N];
        for (int i = 0; i < N; i++) {
            scanf("%d", &candies[i]);
        }

        int max_children = 0;

        for (int i = 0; i < N; i++) {
            max_children += candies[i] / K;
        }

        printf("%d\n", max_children);
    }

    return 0;
}

