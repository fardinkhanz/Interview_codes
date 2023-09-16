#include <stdio.h>

int main() {
    int array1[] = {1, 2, 3, 4, 5};
    int array2[] = {3, 4, 5, 6, 7};

    int size1 = sizeof(array1) / sizeof(array1[0]);
    int size2 = sizeof(array2) / sizeof(array2[0]);

    printf("Common elements between the two arrays: ");

    for (int i = 0; i < size1; i++) {
        for (int j = 0; j < size2; j++) {
            if (array1[i] == array2[j]) {
                printf("%d ", array1[i]);
                break; // Break to avoid duplicate printing for the same element.
            }
        }
    }

    printf("\n");

    return 0;
}
