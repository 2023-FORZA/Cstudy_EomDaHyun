// 백준 7568
#include <stdio.h>

struct People{
    int weight;
    int height;
};

int main() {
    int N;
    scanf("%d", &N);

    struct People member[N];
    int ranks[N];

    for (int i = 0; i < N; i++) {
        scanf("%d %d", &member[i].weight, &member[i].height);
    }

    for (int i = 0; i < N; i++) {
        int rank = 1; 
        for (int j = 0; j < N; j++) {
            if (i == j) {
                continue; 
            }
            if (member[i].weight < member[j].weight && member[i].height < member[j].height) {
                rank++;
            }
        }
        ranks[i] = rank;
    }

    for (int i = 0; i < N; i++) {
        printf("%d ", ranks[i]);
    }

    return 0;
}