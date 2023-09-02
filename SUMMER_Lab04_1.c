//백준 1032
#include <stdio.h>
#include <string.h>

int main() {
    int N;
    scanf("%d", &N);
    char filenames[N][51];

    // 파일 이름 입력 받기
    for (int i = 0; i < N; i++) {
        scanf("%s", filenames[i]);
    }

    int filenameLength = strlen(filenames[0]); // 파일 이름의 길이

    char pattern[51];
    strcpy(pattern, filenames[0]); // 첫 번째 파일 이름을 초기 패턴으로 설정

    // 패턴을 만들기
    for (int i = 0; i < filenameLength; i++) {
        for (int j = 1; j < N; j++) {
            if (filenames[j][i] != pattern[i]) {
                pattern[i] = '?';
                break;
            }
        }
    }

    // 결과 출력
    printf("%s\n", pattern);

    return 0;
}
