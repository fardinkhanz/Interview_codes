int max(int a, int b) {
    return a > b ? a : b;
}

int longestOnes(int* nums, int numsSize, int k) {
    int left = 0;
    int maxLen = 0;

    for (int right = 0; right < numsSize; right++) {

        if (nums[right] == 0) {
            k--;
        }


        while (k < 0) {

            if (nums[left] == 0) {
                k++;
            }
            left++;
        }


        maxLen = max(maxLen, right - left + 1);
    }

    return maxLen;
}
