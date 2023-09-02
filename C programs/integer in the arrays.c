#include <stdio.h>

int main() {
    int N, M, P;
    scanf("%d", &N);

    int seq_A[N];
    for (int i = 0; i < N; i++) {
        scanf("%d", &seq_A[i]);
    }

    scanf("%d", &M);

    int seq_B[M];
    for (int i = 0; i < M; i++) {
        scanf("%d", &seq_B[i]);
    }

    scanf("%d", &P);

    int totalPoints = 0;
    for (int i = 0; i < M; i++) {
        int found = 0;
        for (int j = 0; j < N; j++) {
            if (seq_B[i] == seq_A[j]) {
                totalPoints += seq_B[i]*P;
                seq_A[j] = -1; // Mark as visited
                found = 1;
                break;
            }
        }
        if (!found) {
            totalPoints -= seq_B[i] * P;
        }
    }

    printf("%d\n", totalPoints);

    return 0;
}
