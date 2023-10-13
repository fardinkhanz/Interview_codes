int compare(const void *a, const void *b) {
    return (*(int *)a - *(int *)b);
}


int firstGreater(int *nums, int size, int target) {
    int low = 0, high = size - 1;
    while (low <= high) {
        int mid = low + (high - low) / 2;
        if (nums[mid] > target)
            high = mid - 1;
        else
            low = mid + 1;
    }
    return low;
}

int minOperations(int *nums, int size) {
    int ans = size;

    qsort(nums, size, sizeof(int), compare);

    int uniqueSize = 1;
    for (int i = 1; i < size; ++i) {
        if (nums[i] != nums[i - 1])
            nums[uniqueSize++] = nums[i];
    }

    for (int i = 0; i < uniqueSize; ++i) {
        int start = nums[i];
        int end = start + size - 1;
        int index = firstGreater(nums, uniqueSize, end);
        int uniqueLength = index - i;
        ans = ans < size - uniqueLength ? ans : size - uniqueLength;
    }

    return ans;
}
