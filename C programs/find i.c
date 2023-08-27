#include <stdio.h>
#include <math.h>

int main() {
    int i = 1;
    double x = 1.0;

    while (x < 1000) {
        x = pow(2, x);
        i++;
    }

    printf("Final value of i: %d\n", i);

    return 0;
}
