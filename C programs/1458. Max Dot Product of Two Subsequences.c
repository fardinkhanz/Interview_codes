int max(int a, int b) {
    return a > b ? a : b;
}

int maxDotProduct(int* nums1, int nums1Size, int* nums2, int nums2Size) {
    int dp[nums1Size][nums2Size];

    for (int i = 0; i < nums1Size; i++) {
        for (int j = 0; j < nums2Size; j++) {
            dp[i][j] = nums1[i] * nums2[j];

            if (i > 0)
                dp[i][j] = max(dp[i][j], dp[i - 1][j]);

            if (j > 0)
                dp[i][j] = max(dp[i][j], dp[i][j - 1]);

            if (i > 0 && j > 0)
                dp[i][j] = max(dp[i][j], dp[i - 1][j - 1] + nums1[i] * nums2[j]);
        }
    }

    return dp[nums1Size - 1][nums2Size - 1];
}
