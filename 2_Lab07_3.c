//백준 5565
#include <stdio.h>

int main() {
    int total;
    int price[9];
    int lost;

    scanf("%d", &total);

    for (int i = 0; i < 9; i++) {
        scanf("%d", &price[i]);
    }
    lost = total;
    
    for (int i = 0; i < 9; i++) {
        lost -= price[i];
    }

    printf("%d\n", lost);

    return 0;
}