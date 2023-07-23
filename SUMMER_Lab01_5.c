//백준 3062 수 뒤집기

#include <stdio.h>
#include <stdbool.h>

int reverseInt(int num) {
    int reversed = 0;
    while (num != 0) {
        reversed = reversed * 10 + num % 10;
        num /= 10;
    }
    return reversed;
}

bool isSymmetricSum(int num) {
    int reversed = reverseInt(num);
    int sum = num + reversed;
    int temp = sum;
    int reversedSum = 0;
    
    while (temp != 0) {
        reversedSum = reversedSum * 10 + temp % 10;
        temp /= 10;
    }
    
    return sum == reversedSum;
}

int main() {
    int T;
    scanf("%d", &T);
    
    while (T--) {
        int N;
        scanf("%d", &N);
        
        if (isSymmetricSum(N)) {
            printf("YES\n");
        } else {
            printf("NO\n");
        }
    }
    
    return 0;
}
