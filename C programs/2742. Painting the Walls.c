

long long solve(int cost[], int time[], int index, int sum, int target, long long dp[][501], int n) {

    if (index == n) {
        return sum >= target ? 0 : INT_MAX;
    }
    if (sum >= target) {
        return 0;
    }

    if (dp[index][sum] != -1) {
        return dp[index][sum];
    }

    long long taken = INT_MAX, not_taken = INT_MAX;
    taken = cost[index] + solve(cost, time, index + 1, sum + time[index] + 1, target, dp, n);
    not_taken = solve(cost, time, index + 1, sum, target, dp, n);
    return dp[index][sum] = (taken < not_taken) ? taken : not_taken;
}

int paintWalls(int* cost, int costSize, int* time, int timeSize) {
    int n=costSize;

   long long dp[n][501];
    for (int i = 0; i < n; i++) {
        for (int j = 0; j <= 500; j++) {
            dp[i][j] = -1;
        }
    }

    return (int)solve(cost, time, 0, 0, n, dp, n);
}
