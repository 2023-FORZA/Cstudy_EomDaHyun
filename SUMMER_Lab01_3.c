//백준 1094 막대기

#include <stdio.h>
#include<stdlib.h>
#include<string.h>

int main() {
    int target;
    scanf("%d", &target);
    int result;
    int cnt = 0;
    
    for (int i = 6; i >= 0; i--) {
        result = target >> i & 1;
        if (result == 1) {
            cnt++;
        }
    }
    printf("%d", cnt);
}

