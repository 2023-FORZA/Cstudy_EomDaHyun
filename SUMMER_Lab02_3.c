//백준 2309
#include <stdio.h>

int total_sum = 0;
int total[9];

void find_ans() {
    for (int j = 0; j < 9; j++) {
        int temp_sum = total[j];
        for (int k = j + 1; k < 9; k++) {
            temp_sum += total[k];
            if (total_sum - temp_sum == 100) {
                total[j] = 0;
                total[k] = 0;
                return;
            }
            temp_sum = total[j];
        }
    }
}

void sort_array() {
    int i, j, temp;
    for (i = 0; i < 9 - 1; i++) {
        for (j = 0; j < 9 - i - 1; j++) {
            if (total[j] > total[j + 1]) {
                temp = total[j];
                total[j] = total[j + 1];
                total[j + 1] = temp;
            }
        }
    }
}

int main() {
    for (int i = 0; i < 9; i++) {
        int num;
        scanf("%d", &num);
        total[i] = num;
        total_sum += total[i];
    }

    find_ans();
    sort_array();

    for (int j = 0; j < 9; j++) {
        if (total[j] != 0) {
            printf("%d\n", total[j]);
        }
    }

    return 0;
}
