//백준 2929
#include <stdio.h>
#include <ctype.h>

int main() {
    char input[1000];
    if (fgets(input, sizeof(input), stdin) == NULL) {
        return 1;
    }

    int nop = 0;
    for (int i = 0; input[i] != '\0'; i++) {
        if (isupper(input[i])) {
            if (i == 0) {
                continue;
            }

            int curIdx = i + nop;
            int mod = curIdx % 4;
            if (mod != 0) {
                nop += 4 - mod;
            }
        }
    }

    printf("%d\n", nop);
    return 0;
}
