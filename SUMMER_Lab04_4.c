//백준 5347
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
    int n;
    long long a, b, max, min, gcd, lcm, temp; // gcd = 최대공약수, lcm = 최소공배수
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%lld %lld", &a, &b);
        max = a;
        min = b;
        if (max <= b) {
            max = b;
        }
        if (min >= a) {
            min = a;
        }
        if (max % min == 0) { // 나누어떨어지면 작은 값이 최소공배수
            gcd = min;
        }
        else if (max % min != 0) { // 안 나누어떨어지면 3, 4번 반복
            do {
                temp = min;
                min = max % min;
                max = temp;
            } while (max % min != 0); // 나누어떨어지면 반복문 종료
            gcd = min;
        }
        lcm = (a * b) / gcd;
        printf("%lld\n", lcm);
    }

    return 0;
}
