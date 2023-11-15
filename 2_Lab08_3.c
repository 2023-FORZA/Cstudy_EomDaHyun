//백준 4659
#include <stdio.h>
#include <string.h>

int is_vowel(char ch) {
    return (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u');
}

int evaluate_password(char *password) {
    int i, len = strlen(password);
    int condition1 = 0, condition2 = 0, condition3 = 0;

    for (i = 0; i < len; i++) {
        if (is_vowel(password[i])) {
            condition1 = 1;
            break;
        }
    }

    for (i = 0; i < len - 2; i++) {
        if ((is_vowel(password[i]) && is_vowel(password[i + 1]) && is_vowel(password[i + 2])) ||
            (!is_vowel(password[i]) && !is_vowel(password[i + 1]) && !is_vowel(password[i + 2]))) {
            condition2 = 1;
            break;
        }
    }

    for (i = 0; i < len - 1; i++) {
        if (password[i] == password[i + 1] && password[i] != 'e' && password[i] != 'o') {
            condition3 = 1;
            break;
        }
    }

    if (condition1 && !condition2 && !condition3) {
        printf("<%s> is acceptable.\n", password);
    } else {
        printf("<%s> is not acceptable.\n", password);
    }

    return 0;
}

int main() {
    char password[21];

    while (1) {
        scanf("%s", password);

        if (strcmp(password, "end") == 0) {
            break;
        }

        evaluate_password(password);
    }

    return 0;
}
