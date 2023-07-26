double calculateTime(int* dist, int distSize, int speed) {
    double totalHours = 0.0;
    for (int i = 0; i < distSize-1; i++) {
        double timeForSegment = (double)dist[i] / speed;
        totalHours += ceil(timeForSegment);
    }
     double timeForSegment = (double)dist[distSize-1] / speed;
        totalHours += (timeForSegment);
    return totalHours;
}

int minSpeedOnTime(int* dist, int distSize, double hour) {
    int left = 1;
    int right = 10000000;
    int result = -1;

    while (left <= right) {
        int mid = left + (right - left) / 2;
        double totalHours = calculateTime(dist, distSize, mid);

        if (totalHours <= hour) {

            result = mid;
            right = mid - 1;
        } else {
                        left = mid + 1;
        }
    }

    return result;
}
