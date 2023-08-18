//백준 5354
#include <stdio.h>

int main() {
    int T;
    scanf("%d", &T); // 테스트 케이스의 개수 입력

    for (int t = 0; t < T; t++) {
        int size;
        scanf("%d", &size); // 박스의 크기 입력

        // 박스 출력
        for (int i = 0; i < size; i++) {
            for (int j = 0; j < size; j++) {
                if (i == 0 || i == size - 1 || j == 0 || j == size - 1) {
                    printf("#");
                } else {
                    printf("J");
                }
            }
            printf("\n");
        }

        // 빈 줄 출력
        printf("\n");
    }

    return 0;
}
