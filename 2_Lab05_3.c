//백준 4447
#include <stdio.h>
#include <string.h>

int main() {
    int t;
    int g = 0, b = 0;

    scanf("%d", &t);
    getchar();

    for (int i = 0; i < t; i++) {
        char str[101];
        fgets(str, sizeof(str), stdin);

        if (str[strlen(str) - 1] == '\n') {
            str[strlen(str) - 1] = '\0';
        }

        for (int j = 0; j < strlen(str); j++) {
            if (str[j] == 'g' || str[j] == 'G')
                g++;
            if (str[j] == 'b' || str[j] == 'B')
                b++;
        }

        if (g > b)
            printf("%s is GOOD\n", str);
        else if (g == b)
            printf("%s is NEUTRAL\n", str);
        else
            printf("%s is A BADDY\n", str);

        g = 0, b = 0;
    }

    return 0;
}
