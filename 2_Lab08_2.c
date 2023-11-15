//백준 4626
#include <stdio.h>
#include <stdlib.h>

int gcd(int a, int b) {
    while (b) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

void to_base_7(int N, int D, int B, int E, char* result) {
    int common_factor = gcd(N, D);
    N /= common_factor;
    D /= common_factor;

    int int_part = N / D;
    int frac_part = N % D;

    // Adjust starting point for fractional part
    for (int i = 0; i <= E; ++i) {
        frac_part *= 7;
        if (i >= B) {
            result[i - B] = (frac_part / D) + '0';
        }
        frac_part %= D;
    }

    // Null-terminate the result string
    result[E - B + 1] = '\0';
}

void solve_test_case(int case_number, int N, int D, int B, int E) {
    // Allocate enough space for the result string
    int result_length = E - B + 2;  // Including null-terminator
    char *result = (char*)malloc(result_length * sizeof(char));

    to_base_7(N, D, B, E, result);
    printf("Problem set %d: %d / %d, base 7 digits %d through %d: %s\n", case_number, N, D, B, E, result);

    // Free allocated memory
    free(result);
}

int main() {
    int T;
    scanf("%d", &T);

    for (int case_number = 1; case_number <= T; ++case_number) {
        int N, D, B, E;
        scanf("%d %d %d %d", &N, &D, &B, &E);
        solve_test_case(case_number, N, D, B, E);
    }

    return 0;
}
