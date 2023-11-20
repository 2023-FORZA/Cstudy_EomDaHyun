//백준 2630
#include <stdio.h>
#include <stdlib.h>

#define MAX_N 128

int paper[MAX_N][MAX_N];
int blue = 0;
int white = 0;

void cutting(int (*paper)[MAX_N], int N);

int check(int (*paper)[MAX_N], int N) {
    int result = 0;
    for (int i = 0; i < N; i++)
        for (int j = 0; j < N; j++)
            result += paper[i][j];
    return result;
}

void cutting(int (*paper)[MAX_N], int N) {
    if (check(paper, N) == N * N) {
        blue++;
        return;
    } else if (check(paper, N) == 0) {
        white++;
        return;
    }

    int (*one)[MAX_N] = malloc(N / 2 * MAX_N * sizeof(int));
    int (*two)[MAX_N] = malloc(N / 2 * MAX_N * sizeof(int));
    int (*three)[MAX_N] = malloc(N / 2 * MAX_N * sizeof(int));
    int (*four)[MAX_N] = malloc(N / 2 * MAX_N * sizeof(int));

    for (int i = 0; i < N / 2; i++) {
        for (int j = 0; j < N / 2; j++) {
            one[i][j] = paper[i][j];
            two[i][j] = paper[i][N / 2 + j];
            three[i][j] = paper[N / 2 + i][j];
            four[i][j] = paper[N / 2 + i][N / 2 + j];
        }
    }

    cutting(one, N / 2);
    cutting(two, N / 2);
    cutting(three, N / 2);
    cutting(four, N / 2);

    free(one);
    free(two);
    free(three);
    free(four);
}

int main() {
    int N;
    scanf("%d", &N);

    for (int i = 0; i < N; i++)
        for (int j = 0; j < N; j++)
            scanf("%d", &paper[i][j]);

    cutting(paper, N);

    printf("%d\n%d\n", white, blue);

    return 0;
}
