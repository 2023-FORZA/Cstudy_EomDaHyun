//백준 2697
#include <stdio.h>
#include <string.h>

void find(char* num) {
    int count[10] = {0};
    int len = strlen(num);

    for (int i = 0; i < len; i++) {
        int digit = num[i] - '0';
        count[digit]++;
    }

    int i = len - 1;
    while (i > 0 && num[i - 1] >= num[i]) {
        i--;
    }

    if (i == 0) {
        printf("BIGGEST\n");
        return;
    }

    int j = len - 1;
    while (num[j] <= num[i - 1]) {
        j--;
    }

    char temp = num[i - 1];
    num[i - 1] = num[j];
    num[j] = temp;

    int left = i;
    int right = len - 1;
    while (left < right) {
        char temp = num[left];
        num[left] = num[right];
        num[right] = temp;
        left++;
        right--;
    }

    printf("%s\n", num);
}

int main() {
    int t;
    scanf("%d", &t);

    while (t--) {
        char num[81];
        scanf("%s", num);
        find(num);
    }

    return 0;
}
