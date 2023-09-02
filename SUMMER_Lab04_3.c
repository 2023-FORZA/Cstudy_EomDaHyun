//백준 4673
#include <stdio.h>
#include <stdbool.h>

int d(int n) {
    int sum = n;
    while (n > 0) {
        sum += n % 10;
        n /= 10;
    }
    return sum;
}

int main() {
    bool isSelfNumber[10001] = {false}; // 셀프 넘버 여부를 저장할 배열

    for (int i = 1; i <= 10000; i++) {
        int next = d(i); // i의 생성자를 계산
        if (next <= 10000) {
            isSelfNumber[next] = true; // 생성자가 있는 경우 체크
        }
    }

    for (int i = 1; i <= 10000; i++) {
        if (!isSelfNumber[i]) {
            printf("%d\n", i); // 셀프 넘버인 경우 출력
        }
    }

    return 0;
}
