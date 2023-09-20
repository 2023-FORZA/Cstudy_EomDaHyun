//백준 2204
#include <stdio.h>
#include <string.h>
#include <ctype.h>

char a[21];
char origin[1001][21];

int main() {
    int N = 1;
    int ans_index = 0;

    while (1) {
        scanf("%d", &N);
        char dobiisfree[21] = "zzzzzzzzzzzzzzzzzzzzzz"; // 최대 길이 20

        if (N == 0) {
            break;
        }

        for (int i = 0; i < N; i++) {
            scanf("%s", a);
            strcpy(origin[i], a);

            for (int j = 0; a[j] != '\0'; j++) {
                a[j] = toupper(a[j]);
            }

            for (int j = 0; dobiisfree[j] != '\0'; j++) {
                dobiisfree[j] = toupper(dobiisfree[j]);
            }

            if (strcmp(dobiisfree, a) > 0) {
                strcpy(dobiisfree, origin[i]);
                ans_index = i;
            }
        }

        printf("%s\n", origin[ans_index]);
    }

    return 0;
}
