//백준 1764
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_N 100000

int compare(const void *a, const void *b) {
    return strcmp(*(const char **)a, *(const char **)b);
}

int main() {
    int l, s;
    scanf("%d %d", &l, &s);

    char *n_heard[MAX_N];
    char *n_hs[MAX_N];

    for (int i = 0; i < l + s; i++) {
        n_heard[i] = (char *)malloc(21);
        scanf("%s", n_heard[i]);
    }

    qsort(n_heard, l + s, sizeof(char *), compare);

    int count = 0; // 듣보잡의 수

    for (int i = 0; i < l + s - 1; i++) {
        if (strcmp(n_heard[i], n_heard[i + 1]) == 0) {
            n_hs[count] = n_heard[i];
            count++;
            i++;
        }
    }

    printf("%d\n", count);
    for (int i = 0; i < count; i++) {
        printf("%s\n", n_hs[i]);
    }

    for (int i = 0; i < l + s; i++) {
        free(n_heard[i]);
    }

    return 0;
}
