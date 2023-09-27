//백준 10870
#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    
    long fib[21];
    
    fib[0] = 0;
    fib[1] = 1;
    
    for (int i = 2; i <= n; i++) {
        fib[i] = fib[i - 1] + fib[i - 2];
    }
    
    printf("%ld\n", fib[n]);
    
    return 0;
}
