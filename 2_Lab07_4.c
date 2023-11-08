//백준 1316
#include <stdio.h>
#include <string.h>

int findWord(char* word) {
    int i, len = strlen(word);
    int used[26] = { 0 };

    for (i = 0; i < len; i++) {
        int index = word[i] - 'a';

        if (used[index] && word[i - 1] != word[i]) {
            return 0;
        }
        used[index] = 1;
    }

    return 1;
}

int main() {
    int N, count = 0;
    char word[101];

    scanf("%d", &N);

    for (int i = 0; i < N; i++) {
        scanf("%s", word);

        if (findWord(word)) {
            count++;
        }
    }

    printf("%d\n", count);

    return 0;
}
