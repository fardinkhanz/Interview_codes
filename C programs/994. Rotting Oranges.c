int orangesRotting(int** grid, int gridSize, int* gridColSize) {
    int m = gridSize, n = gridColSize[0];
    int queue[m * n][2];
    int front = 0, rear = 0;
    int freshOranges = 0;

    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            if (grid[i][j] == 2) {
                queue[rear][0] = i;
                queue[rear][1] = j;
                rear++;
            } else if (grid[i][j] == 1) {
                freshOranges++;
            }
        }
    }

    if (freshOranges == 0) {
        return 0;
    }

    int directions[4][2] = {{1, 0}, {-1, 0}, {0, 1}, {0, -1}};
    int minutes = 0;

    while (front < rear) {
        int size = rear - front;
        for (int i = 0; i < size; i++) {
            int x = queue[front][0];
            int y = queue[front][1];
            front++;

            for (int j = 0; j < 4; j++) {
                int newX = x + directions[j][0];
                int newY = y + directions[j][1];

                if (newX >= 0 && newY >= 0 && newX < m && newY < n && grid[newX][newY] == 1) {
                    grid[newX][newY] = 2;
                    queue[rear][0] = newX;
                    queue[rear][1] = newY;
                    rear++;
                    freshOranges--;
                }
            }
        }
        if (rear > front) {
            minutes++;
        }
    }

    return freshOranges == 0 ? minutes : -1;
}
