//백준 2920
#include <stdio.h>

int main() {
    int sound[8];

    for (int i = 0; i < 8; i++) {
        scanf("%d", &sound[i]);
    }

    int ascending = 1;
    for (int i = 0; i < 7; i++) {
        if (sound[i] >= sound[i + 1]) {
            ascending = 0;
            break;
        }
    }

    int descending = 1;
    for (int i = 0; i < 7; i++) {
        if (sound[i] <= sound[i + 1]) {
            descending = 0;
            break;
        }
    }
    
    if (ascending) {
        printf("ascending\n");
    }
    else if (descending) {
        printf("descending\n");
    }
    else {
        printf("mixed\n");
    }
    
    return 0 ;
    
}