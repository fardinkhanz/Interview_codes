int minEatingSpeed(int* piles, int pilesSize, int h){
 int left = 1;
    int right = INT_MAX;
    int result = INT_MAX;

    while (left <= right) {
        int mid = left + (right - left) / 2;
        int hours = 0;

        for (int i = 0; i < pilesSize; i++) {
            hours += (piles[i] + mid - 1) / mid;
        }

        if (hours <= h) {
            result = (mid < result) ? mid : result;
            right = mid - 1;
        } else {
            left = mid + 1;
        }
    }

    return result;

}
