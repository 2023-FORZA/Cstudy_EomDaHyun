//백준 10807
#include <stdio.h>

int main() {
    int N, v;
    scanf("%d", &N);

    int x[N];
    for (int i = 0; i < N; i++) {
        scanf("%d", &x[i]);
    }
    scanf("%d", &v);

    int count = 0;
    for (int i = 0; i < N; i++) {
        if (x[i] == v) {
            count++;
        }
    }
    printf("%d\n", count);

    return 0;
}