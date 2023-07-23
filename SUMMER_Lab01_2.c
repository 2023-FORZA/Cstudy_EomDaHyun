//백준 1085 직사각형에서 탈출

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
    int x, y, w, h, a, b;
    scanf("%d %d %d %d", &x, &y, &w, &h);
    a = w - x;
    b = h - y;

    int min;
    min = x;
    if (y <= min) {
        min = y;
    }
    if (a <= min) {
        min = a;
    }
    if (b <= min) {
        min = b;
    }
    printf("%d", min);

    return 0;
}