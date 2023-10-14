#include <stdio.h>
#include <stdlib.h>

int compareInts(const void *a, const void *b) {
    return (*(int*)a - *(int*)b);
}

int* fullBloomFlowers(int** flowers, int flowersSize, int* flowersColSize, int* people, int peopleSize, int* returnSize) {
    int* start = (int*)malloc(flowersSize * sizeof(int));
    int* end = (int*)malloc(flowersSize * sizeof(int));
    int* res = (int*)malloc(peopleSize * sizeof(int));

    for (int i = 0; i < flowersSize; i++) {
        start[i] = flowers[i][0];
        end[i] = flowers[i][1];
    }

    qsort(start, flowersSize, sizeof(int), compareInts);
    qsort(end, flowersSize, sizeof(int), compareInts);

    for (int i = 0; i < peopleSize; i++) {
        int t = people[i];
        int started = 0, ended = 0;


     int left = 0, right = flowersSize - 1;
        while (left <= right) {
            int mid = left + (right - left) / 2;
            if (start[mid] <= t) {
                started = mid + 1;
                left = mid + 1;
            } else {
                right = mid - 1;
            }
        }


        left = 0, right = flowersSize - 1;
        while (left <= right) {
            int mid = left + (right - left) / 2;
            if (end[mid] < t) {
                ended = mid + 1;
                left = mid + 1;
            } else {
                right = mid - 1;
            }
        }

        res[i] = started - ended;
    }

    *returnSize = peopleSize;
    free(start);
    free(end);
    return res;
}
