//백준 2702
#include <stdio.h>

// 최대공약수
int gcd(int a, int b) {
    if (b == 0)
        return a;
    return gcd(b, a % b);
}

// 최소공배수
int lcm(int a, int b) {
    return (a * b) / gcd(a, b);
}

int main() {
    int T;
    scanf("%d", &T);

    while (T--) {
        int a, b;
        scanf("%d %d", &a, &b);

        int gcd_result = gcd(a, b);
        int lcm_result = lcm(a, b);

        printf("%d %d\n", lcm_result, gcd_result);
    }

    return 0;
}
