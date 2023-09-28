

struct poi {
    long int start;
    long int end;
};

int compare(const void* a, const void* b) {
    return ((struct poi*)a)->end < ((struct poi*)b)->end ? -1 : 1;
}

int findMinArrowShots(int** points, int pointsSize, int* pointsColSize) {
    if (pointsSize <= 0) {
        return 0;
    }

    struct poi* array = (struct poi*)malloc(pointsSize * sizeof(struct poi));

    for (int i = 0; i < pointsSize; i++) {
        array[i].start = (long int)points[i][0];
        array[i].end = (long int)points[i][1];
    }

    qsort(array, pointsSize, sizeof(struct poi), compare);

    int arrows = 1;
    long int commonEnd = array[0].end;

    for (int i = 1; i < pointsSize; i++) {
        if (array[i].start > commonEnd) {
            arrows++;
            commonEnd = array[i].end;
        }
    }

    free(array);

    return arrows;
}
