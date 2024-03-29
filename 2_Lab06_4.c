//백준 2097
#include <stdio.h>

int N;

int solution() {
    int answer = 4;
    int i = 1;

    if (N <= 4) return answer;

    while (1) {
        if (i * i == N) {
            answer = (i - 1) * 4;
            break;
        }
        if (i * i > N) {
            int remainedStone = N - (i - 1) * (i - 1);
            answer = (remainedStone > i - 1) ? (i - 1) * 4 : (i - 2) * 2 + (i - 1) * 2;
            break;
        }
        i++;
    }

    return answer;
}

int main() {
    scanf("%d", &N);
    printf("%d", solution());
    return 0;
}
