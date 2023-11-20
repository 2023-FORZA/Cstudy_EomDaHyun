//백준 2635
#include <stdio.h>
#include <stdlib.h>

int main() {
    int num;
    scanf("%d", &num);

    int cnt = 0;
    int *answer = NULL;

    for (int i = num; i >= 0; i--) {
        int a = num;
        int b = i;

        int *arr = malloc(sizeof(int) * 2);
        arr[0] = a;
        arr[1] = b;

        int size = 2;

        while (a - b >= 0) {
            int c = a - b;
            size++;
            arr = realloc(arr, sizeof(int) * size);
            arr[size - 1] = c;
            a = b;
            b = c;
        }

        if (size > cnt) {
            cnt = size;
            free(answer);
            answer = arr;
        } else {
            free(arr);
        }
    }

    printf("%d\n", cnt);
    for (int i = 0; i < cnt; i++) {
        printf("%d", answer[i]);
        if (i < cnt - 1) {
            printf(" ");
        }
    }

    free(answer);

    return 0;
}
