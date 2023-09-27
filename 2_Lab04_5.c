//백준 2609
#include <stdio.h>

int main() {
    char input[20];
    int A, B;
    int lcb1 = 0;
    int lcb2 = 0;

    fgets(input, sizeof(input), stdin);
    sscanf(input, "%d %d", &A, &B);

    if (A > B) {
        int temp = A;
        A = B;
        B = temp;
    }

    for (int i = 1; i <= B; i++) {
        if (i <= A) {
            if (A % i == 0 && B % i == 0) {
                lcb1 = i;
            }
        }
        if ((A * i) % B == 0 && lcb2 == 0) {
            lcb2 = A * i;
        }
    }

    printf("%d\n", lcb1);
    printf("%d\n", lcb2);

    return 0;
}
