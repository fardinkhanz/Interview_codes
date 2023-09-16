#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int isPerfectSquare(int n) {
    int sqrt_result = (int)sqrt((double)n);
    return sqrt_result * sqrt_result == n;
}

int main() {
    char input[20];
    printf("Enter a number with an underscore: ");
    scanf("%s", input);

    // Find the position of the underscore character
    int underscorePos = -1;
    for (int i = 0; i < strlen(input); i++) {
        if (input[i] == '_') {
            underscorePos = i;
            break;
        }
    }

    if (underscorePos != -1) {
        // Iterate over digits 0-9 and replace the underscore
        for (int digit = 0; digit <= 9; digit++) {
            input[underscorePos] = digit + '0';  // Convert digit to character
            int number = atoi(input);

            if (isPerfectSquare(number)) {
                printf("%d is a perfect square.\n", number);
                return 0;  // Exit the program after finding the first perfect square
            }
        }

        printf("No perfect square found by replacing the underscore.\n");
    } else {
        printf("Invalid input: Please include an underscore in the input.\n");
    }

    return 0;
}
