//백준 2003
#include <stdio.h>

int main() {
    int N, M;
    scanf("%d %d", &N, &M);

    int A[N];
    for (int i = 0; i < N; i++) {
        scanf("%d", &A[i]);
    }

    int count = 0;
    int start = 0;
    int end = 0;
    int sum = A[0];

    while (end < N) {
        if (sum < M) {
            end++;
            sum += A[end];
        }
        else if (sum == M) {
            count++;
            sum -= A[start];
            start++;
        }
        else {
            sum -= A[start];
            start++;
        }
    }
    printf("%d\n", count);
    
    return 0;
}
