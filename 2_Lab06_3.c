//백준 2012
#include <stdio.h>
#include <stdlib.h>

int compare(const void *a, const void *b) {
    return (*(int *)a - *(int *)b);
}

int main() {
    int N;
    scanf("%d", &N);
    int *grade = (int *)malloc(N * sizeof(int));

    for (int i = 0; i < N; i++) {
        scanf("%d", &grade[i]);
    }

    qsort(grade, N, sizeof(int), compare);

    long long ans = 0;

    for (int i = 0; i < N; i++) {
        ans += abs(grade[i] - (i + 1));
    }

    printf("%lld\n", ans);

    free(grade);
    return 0;
}
