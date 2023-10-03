int dfs(int** grid, int x, int y, int zero, int row, int col) {
    if (x < 0 || x >= row || y < 0 || y >= col || grid[x][y] == -1) {
        return 0;
    }

    if (grid[x][y] == 2) {
        return (zero == -1) ? 1 : 0;
    }

    grid[x][y] = -1;
    int total = dfs(grid, x + 1, y, zero - 1, row, col) +
                dfs(grid, x, y + 1, zero - 1, row, col) +
                dfs(grid, x - 1, y, zero - 1, row, col) +
                dfs(grid, x, y - 1, zero - 1, row, col);

    grid[x][y] = 0;

    return total;
}

int uniquePathsIII(int** grid, int gridSize, int* gridColSize) {
    int zero = 0, sx = 0, sy = 0;
    int row = gridSize;
    int col = *gridColSize;

    for (int i = 0; i < gridSize; i++) {
        for (int j = 0; j < col; j++) {
            if (grid[i][j] == 0) {
                zero++;
            } else if (grid[i][j] == 1) {
                sx = i;
                sy = j;
            }
        }
    }

    return dfs(grid, sx, sy, zero, row, col);
}
