//백준 13223
#include <stdio.h>

int main() {
    int now[3], put[3], ans[3];

    scanf("%d:%d:%d", &now[0], &now[1], &now[2]);
    scanf("%d:%d:%d", &put[0], &put[1], &put[2]);

    int currentTime = now[0] * 3600 + now[1] * 60 + now[2];
    int saltTime = put[0] * 3600 + put[1] * 60 + put[2];

    if (saltTime <= currentTime) {
        saltTime += 24 * 3600;
    }

    int robotTime = saltTime - currentTime;

    ans[0] = robotTime / 3600;
    ans[1] = (robotTime % 3600) / 60;
    ans[2] = robotTime % 60;

    printf("%02d:%02d:%02d\n", ans[0], ans[1], ans[2]);

    return 0;
}
