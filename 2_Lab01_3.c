//백준 2693
#include <stdio.h>

int main() {
    int T;
    scanf("%d", &T);

    while (T--) {
        int A[10];
        for (int i = 0; i < 10; i++) {
            scanf("%d", &A[i]);
        }

        for (int i = 0; i < 9; i++) {
            for (int j = 0; j < 9 - i; j++) {
                if (A[j] < A[j + 1]) {
                    int temp = A[j];
                    A[j] = A[j + 1];
                    A[j + 1] = temp;
                }
            }
        }

        printf("%d\n", A[2]);
    }

    return 0;
}
