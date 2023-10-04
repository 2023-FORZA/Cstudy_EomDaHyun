//백준 2246
#include <stdio.h>
#include <stdlib.h>

typedef struct {
    int distance;
    int cost;
} Condo;

int compare(const void *a, const void *b) {
    Condo *condoA = (Condo *)a;
    Condo *condoB = (Condo *)b;

    if (condoA->distance == condoB->distance) {
        return condoA->cost - condoB->cost;
    }
    return condoA->distance - condoB->distance;
}

int main() {
    int N;
    scanf("%d", &N);

    Condo condos[N];

    for (int i = 0; i < N; i++) {
        scanf("%d %d", &condos[i].distance, &condos[i].cost);
    }

    qsort(condos, N, sizeof(Condo), compare);

    int candidates = 1;

    int minCost = condos[0].cost;
    for (int i = 1; i < N; i++) {
        if (condos[i].cost < minCost) {
            candidates++;
            minCost = condos[i].cost;
        }
    }

    printf("%d\n", candidates);

    return 0;
}
