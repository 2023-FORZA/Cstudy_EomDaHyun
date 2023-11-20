//백준 2606
#include <stdio.h>
#include <stdbool.h>

#define MAX 1000

int N, M, cnt;
int graph[MAX][MAX];
bool infected[MAX];

void dfs(int start) {
    infected[start] = true;
    for (int i = 1; i <= N; i++) {
        if (graph[start][i] && !infected[i]) {
            infected[i] = true;
            cnt++;
            dfs(i);
        }
    }
}

int main() {
    scanf("%d", &N);
    scanf("%d", &M);

    for (int i = 0; i < M; i++) {
        int u, v;
        scanf("%d %d", &u, &v);
        graph[u][v] = 1;
        graph[v][u] = 1;
    }

    dfs(1);
    printf("%d\n", cnt);

    return 0;
}