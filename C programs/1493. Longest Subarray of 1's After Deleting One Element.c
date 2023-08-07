int longestSubarray(int* nums, int numsSize){
    int countOnes = 0;
    int lastZero = -1;
    int maxConsecutiveOnes = 0;

    for (int i = 0; i < numsSize; i++) {
        if (nums[i] == 1) {
            countOnes++;
        } else {
            countOnes = i - lastZero;
            lastZero = i;
        }


        maxConsecutiveOnes = fmax(maxConsecutiveOnes, countOnes - 1);
    }

    return maxConsecutiveOnes;
}
