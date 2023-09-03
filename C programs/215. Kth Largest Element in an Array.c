void swap(int* a, int* b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}


void maxHeapify(int* nums, int size, int i) {
    int largest = i;
    int left = 2 * i + 1;
    int right = 2 * i + 2;

    if (left < size && nums[left] > nums[largest])
        largest = left;

    if (right < size && nums[right] > nums[largest])
        largest = right;

    if (largest != i) {
        swap(&nums[i], &nums[largest]);
        maxHeapify(nums, size, largest);
    }
}


void buildMaxHeap(int* nums, int size) {
    for (int i = size / 2 - 1; i >= 0; i--)
        maxHeapify(nums, size, i);
}

int findKthLargest(int* nums, int numsSize, int k) {

   -- k ;

    buildMaxHeap(nums, numsSize);

    int result = INT_MAX;

    for (int i = 0; i <= k; i++) {
        result = nums[0];
        nums[0] = nums[numsSize - i - 1];
        maxHeapify(nums, numsSize - i - 1, 0);
    }

    return result;
}
