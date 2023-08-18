//백준 1978
#include <stdio.h>

int is_prime(int num) {
    if (num < 2) {
        return 0;
    }
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) {
            return 0;
        }
    }
    return 1;
}

int main() {
    int N;
    scanf("%d", &N);
    
    int count = 0; // 소수의 개수를 세는 변수

    for (int i = 0; i < N; i++) {
        int num;
        scanf("%d", &num);
        
        if (is_prime(num)) {
            count++;
        }
    }

    printf("%d\n", count);

    return 0;
}
