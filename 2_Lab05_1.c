//백준 2238
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_N 100001

int price[MAX_N] = { 0 };

int main() {
    int U;
    int N;
    scanf("%d %d", &U, &N);

    char names[N][21];
    int values[N];

    for (int i = 0; i < N; i++) {
        scanf("%s %d", names[i], &values[i]);
        price[values[i]]++;
    }

    int smallprice = MAX_N;

    for (int i = 1; i <= 100000; i++) {
        if (price[i] > 0) {
            smallprice = (smallprice < price[i]) ? smallprice : price[i];
        }
    }

    int lowprice[MAX_N];
    int lowprice_count = 0;

    for (int i = 1; i <= 100000; i++) {
        if (price[i] == smallprice) {
            lowprice[lowprice_count++] = i;
        }
    }

    // 오름차순으로 정렬
    for (int i = 0; i < lowprice_count - 1; i++) {
        for (int j = i + 1; j < lowprice_count; j++) {
            if (lowprice[i] > lowprice[j]) {
                int temp = lowprice[i];
                lowprice[i] = lowprice[j];
                lowprice[j] = temp;
            }
        }
    }

    for (int i = 0; i < N; i++) {
        if (values[i] == lowprice[0]) {
            printf("%s %d\n", names[i], values[i]);
            break;
        }
    }

    return 0;
}
