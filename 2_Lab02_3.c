//백준 4470
#include <stdio.h>
#include <string.h>

int main() {
    int n;
    char str[1000];
    int i;

    scanf("%d", &n);
    getchar();

    for (i = 1; i <= n; i++) {
        fgets(str, sizeof(str), stdin);
        printf("%d. %s", i, str);
    }

    return 0;
}
