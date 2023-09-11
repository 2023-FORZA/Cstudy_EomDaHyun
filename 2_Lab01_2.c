//백준 2688
#include <stdio.h>

long long dp[1001][10];

int main() {
    int test, a;
    scanf("%d", &test);
    
    for (int i = 0; i < 10; i++)
        dp[1][i] = 1;
    
    for (int i = 2; i <= 1000; i++) {
        for (int j = 0; j < 10; j++) {
            for (int k = j; k >= 0; k--) {
                dp[i][j] += dp[i - 1][k];
            }
        }
    }
    
    for (int t = 0; t < test; t++) {
        scanf("%d", &a);
        long long sum = 0;
        for (int i = 0; i < 10; i++) {
            sum += dp[a][i];
        }
        printf("%lld\n", sum);
    }
    
    return 0;
}
