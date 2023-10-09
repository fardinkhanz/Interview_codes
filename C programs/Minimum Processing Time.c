
int max(int a, int b) {
    return a > b ? a : b;
}

// Function to compare two integers for qsort
int compare(const void *a, const void *b) {
    return (*(int *)a - *(int *)b);
}

int minProcessingTime(int* processorTime, int processorTimeSize, int* tasks, int tasksSize) {
    int n = processorTimeSize;
    int m = tasksSize;

    // Sort the processorTime and tasks arrays in non-decreasing order.
    qsort(processorTime, n, sizeof(int), compare);
    qsort(tasks, m, sizeof(int), compare);

    int maxTime = 0,z=0;
    int taskIdx = m - 1;

    for (int i = 0; i <n; i++) {
        int currentTime = processorTime[i];
        for (int j = z; j < 4+z ; j++) {
            maxTime = max(maxTime, currentTime + tasks[taskIdx]);
            taskIdx--;
        }
        z+=n;
    }

    return maxTime;
}
