//백준 10809
#include <stdio.h>
#include <string.h>

int main() {
    char word[100];
    scanf("%s", word);

    int length = strlen(word);
    int k[26];

    for (int i = 0; i < 26; i++) {
        k[i] = -1;
    }

    for (int i = 0; i < length; i++) {
        int index = word[i] - 'a';
        if (k[index] == -1) {
            k[index] = i;
        }
    }
    for (int i = 0; i < 26; i++) {
        printf("%d ", k[i]);
    }
    return 0;
}
