//백준 8958
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int total_score(char* str) {
    int len = strlen(str);
    int score = 0;
    int sum = 0;

    for (int i = 0; i < len; i++) {
        if (str[i] == 'O') {
            sum++;
            score += sum;
        } else {
            sum = 0;
        }
    }

    return score;
}

int main() {
    int k;
    scanf("%d", &k);

    char** strings = (char**)malloc(sizeof(char*) * k);
    for (int i = 0; i < k; i++) {
        strings[i] = (char*)malloc(sizeof(char) * 81);
        scanf("%s", strings[i]);
    }

    for (int i = 0; i < k; i++) {
        int score = total_score(strings[i]);
        printf("%d\n", score);
    }

    for (int i = 0; i < k; i++) {
        free(strings[i]);
    }
    free(strings);

    return 0;
}
