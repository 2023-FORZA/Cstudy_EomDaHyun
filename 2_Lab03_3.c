//백준 1942
#include <stdio.h>
#include <string.h>

char s[3][2][18]; // 문자열 배열 선언

int toint(int time) {
    int n[3];
    for (int i = 0; i < 3; i++) {
        n[i] = time % 60;
        time /= 60;
    }
    return n[2] * 10000 + n[1] * 100 + n[0];
}

int tosec(char *time) {
    int h, m, sec;
    sscanf(time, "%d:%d:%d", &h, &m, &sec);
    return (h * 3600 + m * 60 + sec);
}

void input() {
    for (int i = 0; i < 3; i++) {
        scanf("%s %s", s[i][0], s[i][1]);
    }
}

void solve() {
    for (int i = 0; i < 3; i++) {
        int cnt = 0;
        int first = tosec(s[i][0]), last = tosec(s[i][1]);
        while (1) {
            if (toint(first) % 3 == 0)
                cnt++;
            if (first == last)
                break;
            first++;
            first %= (3600 * 24);
        }
        printf("%d\n", cnt);
    }
}

int main() {
    input();
    solve();
    return 0;
}
