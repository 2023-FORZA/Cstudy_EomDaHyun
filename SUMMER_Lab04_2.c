//백준 2941
#include <stdio.h>
#include <string.h>

int main() {
    char input[101]; // 최대 100글자의 단어를 입력받을 문자열
    scanf("%s", input);

    int length = strlen(input);
    int count = 0; // 크로아티아 알파벳의 개수

    for (int i = 0; i < length; i++) {
        if (input[i] == 'c' && (input[i + 1] == '=' || input[i + 1] == '-')) {
            i++; // 'c=' 또는 'c-'를 만나면 한 글자로 취급
        } else if (input[i] == 'd') {
            if (input[i + 1] == 'z' && input[i + 2] == '=') {
                i += 2; // 'dz='를 만나면 한 글자로 취급
            } else if (input[i + 1] == '-') {
                i++; // 'd-'를 만나면 한 글자로 취급
            }
        } else if ((input[i] == 'l' || input[i] == 'n') && input[i + 1] == 'j') {
            i++; // 'lj' 또는 'nj'를 만나면 한 글자로 취급
        } else if ((input[i] == 's' || input[i] == 'z') && input[i + 1] == '=') {
            i++; // 's=' 또는 'z='를 만나면 한 글자로 취급
        }

        count++; // 크로아티아 알파벳이 아니거나 처리한 경우, 글자 수 증가
    }

    printf("%d\n", count);

    return 0;
}
