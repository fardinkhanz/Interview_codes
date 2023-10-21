#include <stdio.h>

void invertColor(char matrix[3][3], int i, int j) {
    if (matrix[i][j] == 'R') {
        matrix[i][j] = 'B';
    } else if (matrix[i][j] == 'B') {
        matrix[i][j] = 'R';
    }
}

int main() {
    char matrix[3][3] = {
        {'R', 'R', 'B'},
        {'R', 'B', 'B'},
        {'R', 'B', 'R'}
    };

    int i = 1, j = 2; // (1, 2)

    invertColor(matrix, i, j);

    // Print the updated matrix
    for (int row = 0; row < 3; row++) {
        for (int col = 0; col < 3; col++) {
            printf("%c ", matrix[row][col]);
        }
        printf("\n");
    }

    return 0;
}
