//백준 2562
#include <stdio.h>

int main() {
    int x[9];
    int max = 0;
    int index = 0;

    for (int i = 0; i < 9; i++) {
        scanf("%d", &x[i]);
        if (x[i] > max) {
            max = x[i];
            index = i + 1;
        }
    }
    printf("%d\n%d\n", max, index);

    return 0;
}
