//백준 2669
#include <stdio.h>

int main() {
    int rectangles[4][4];

    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            scanf("%d", &rectangles[i][j]);
        }
    }
    
    int grid[101][101] = {0};

    for (int i = 0; i < 4; i++) {
        for (int x = rectangles[i][0]; x < rectangles[i][2]; x++) {
            for (int y = rectangles[i][1]; y < rectangles[i][3]; y++) {
                grid[x][y] = 1;
            }
        }
    }

    int area = 0;
    for (int i = 1; i <= 100; i++) {
        for (int j = 1; j <= 100; j++) {
            if (grid[i][j] == 1) {
                area++;
            }
        }
    }

    printf("%d\n", area);

    return 0;
}
