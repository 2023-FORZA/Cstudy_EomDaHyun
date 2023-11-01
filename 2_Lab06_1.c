//백준 1813
#include <stdio.h>

int arr[100000] = { 0 };

int main() {
    int N, n;
    int i;

    scanf("%d", &N);

    for (i = 0; i < N; i++) {
        scanf("%d", &n);
        arr[n]++;
    }

    for (i = N; i >= 0; i--) {
        if (arr[i] == i) {
            printf("%d", i);
            return 0;
        }
    }

    printf("-1");
    return 0;
}
