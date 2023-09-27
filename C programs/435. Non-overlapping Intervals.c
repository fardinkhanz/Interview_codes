struct Interval {
    int start;
    int end;
};

int compare(const void* a, const void* b) {
    return ((struct Interval*)a)->end - ((struct Interval*)b)->end;
}

int eraseOverlapIntervals(int** intervals, int intervalsSize, int* intervalsColSize) {
    if (intervalsSize == 0) {
        return 0;
    }


    struct Interval* intervalsArray = (struct Interval*)malloc(intervalsSize * sizeof(struct Interval));

    for (int i = 0; i < intervalsSize; i++) {
        intervalsArray[i].start = intervals[i][0];
        intervalsArray[i].end = intervals[i][1];
    }


    qsort(intervalsArray, intervalsSize, sizeof(struct Interval), compare);

    int ans = 1;
    int prevEnd = intervalsArray[0].end;

    for (int i = 1; i < intervalsSize; i++) {
        if (intervalsArray[i].start >= prevEnd) {
            ans++;
            prevEnd = intervalsArray[i].end;
        }
    }

    free(intervalsArray);

    return intervalsSize - ans;
}s
