//백준 2863
#include <stdio.h>

int main() {
    double a, b, c, d;

    scanf("%lf %lf %lf %lf", &a, &b, &c, &d);

    double x = a / c + b / d;
    double y = c / d + a / b;
    double z = d / b + c / a;
    double q = b / a + d / c;

    if (x >= y && x >= z && x >= q)
        printf("0\n");
    else if (y >= x && y >= z && y >= q)
        printf("1\n");
    else if (z >= x && z >= y && z >= q)
        printf("2\n");
    else if (q >= x && q >= y && q >= z)
        printf("3\n");

    return 0;
}
