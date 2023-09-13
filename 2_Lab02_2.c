//백준 10430
#include <stdio.h>

int main() {
    int A, B, C;
    scanf("%d %d %d", &A, &B, &C);

    int a = (A + B) % C;
    int b = ((A % C) + (B % C)) % C;
    int c = (A * B) % C;
    int d = ((A % C) * (B % C)) % C;

    printf("%d\n%d\n%d\n%d\n", a, b, c, d);

    return 0;
}
