//백준 1541
#include <stdio.h>
#include <string.h>

int main() {
    char calculate[51];
    scanf("%s", calculate);

    int result = 0;
    int num = 0;
    int sign = 1;

    int len = strlen(calculate);

    for (int i = 0; i < len; i++) {
        if (calculate[i] == '+') {
            result += sign * num;
            num = 0;
        }
        else if (calculate[i] == '-') {
            result += sign * num;
            num = 0;
            sign = -1;
        }
        else {
            num = num * 10 + (calculate[i] - '0');
        }
    }

    result += sign * num;

    printf("%d\n", result);

    return 0;
}
