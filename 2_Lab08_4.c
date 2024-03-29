//백준 3845
#include <stdio.h>
#include <stdlib.h>

// 비교 함수 정의
int cmp(const void *a, const void *b) {
    return (*(float *)a > *(float *)b) ? 1 : (*(float *)a < *(float *)b) ? -1 : 0;
}

int main() {
    int nx, ny;
    float w;

    while (scanf("%d%d%f", &nx, &ny, &w), nx) {
        int i;
        float x[nx];
        float y[ny];

        for (i = 0; i < nx; scanf("%f", x + i++))
            ;
        for (i = 0; i < ny; scanf("%f", y + i++))
            ;

        // 배열 정렬
        qsort(x, nx, sizeof(float), cmp);
        qsort(y, ny, sizeof(float), cmp);

        float state = 0;

        // x 배열 검사
        for (i = 0; i < nx; i++) {
            if (state < 75 && state < x[i] - w / 2) break;
            else state = x[i] + w / 2;
        }

        if (state < 75) {
            puts("NO");
            continue;
        }

        state = 0;

        // y 배열 검사
        for (i = 0; i < ny; i++) {
            if (state < 100 && state < y[i] - w / 2) break;
            else state = y[i] + w / 2;
        }

        if (state < 100) {
            puts("NO");
            continue;
        }

        puts("YES");
    }

    return 0;
}
