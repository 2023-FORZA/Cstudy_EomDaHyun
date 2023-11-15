//백준 5179
#include <stdio.h>

#define MAX_M 10
#define MAX_N 5000
#define MAX_P 500

typedef struct {
    int id;
    int solved;
    int score;
} Participant;

int compareParticipants(const void *a, const void *b) {
    const Participant *participantA = (const Participant *)a;
    const Participant *participantB = (const Participant *)b;

    if (participantA->solved != participantB->solved) {
        return participantB->solved - participantA->solved;
    } else if (participantA->score != participantB->score) {
        return participantA->score - participantB->score;
    } else {
        return participantA->id - participantB->id;
    }
}

int main() {
    int K;
    scanf("%d", &K);

    for (int k = 1; k <= K; k++) {
        int M, N, P;
        scanf("%d %d %d", &M, &N, &P);

        Participant participants[MAX_P];
        for (int i = 0; i < P; i++) {
            participants[i].id = i + 1;
            participants[i].solved = 0;
            participants[i].score = 0;
        }

        int submissionTime[MAX_P][MAX_M];
        int incorrectAttempts[MAX_P][MAX_M];
        for (int i = 0; i < P; i++) {
            for (int j = 0; j < M; j++) {
                submissionTime[i][j] = -1;
                incorrectAttempts[i][j] = 0;
            }
        }

        for (int i = 0; i < N; i++) {
            int p, m, t, j;
            scanf("%d %c %d %d", &p, &m, &t, &j);
            m -= 'A';

            if (j == 1 && submissionTime[p - 1][m] == -1) {
                participants[p - 1].solved++;
                participants[p - 1].score += t + incorrectAttempts[p - 1][m] * 20;
                submissionTime[p - 1][m] = t;
            } else if (j == 0) {
                incorrectAttempts[p - 1][m]++;
            }
        }

        qsort(participants, P, sizeof(Participant), compareParticipants);

        printf("Data Set %d:\n", k);
        for (int i = 0; i < P; i++) {
            printf("%d %d %d\n", participants[i].id, participants[i].solved, participants[i].score);
        }

        if (k < K) {
            printf("\n");
        }
    }

    return 0;
}
