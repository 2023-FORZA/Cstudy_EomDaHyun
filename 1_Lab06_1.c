//백준 1547
#include <stdio.h>

void swap(int* a, int* b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
    int k;
    scanf("%d", &k);
    int ball = 1; 
    int cups[] = {1, 2, 3}; 

    for (int i = 0; i < k; i++) {
        int x, y;
        scanf("%d %d", &x, &y);

        swap(&cups[x - 1], &cups[y - 1]);

        if (ball == x) {
            ball = y;
        } else if (ball == y) {
            ball = x;
        }
    }

    printf("%d\n", ball);

    return 0;
}
