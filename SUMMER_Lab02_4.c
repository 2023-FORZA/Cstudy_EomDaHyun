//백준 2884
#include <stdio.h>

int main() {
    int H, M;
    scanf("%d %d", &H, &M);

    M -= 45;
    if (M < 0) {
        M += 60;
        H--;
        if (H < 0)
            H = 23;
    }

    printf("%d %d\n", H, M);
    return 0;
}
