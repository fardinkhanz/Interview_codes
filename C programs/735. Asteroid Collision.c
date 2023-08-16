int* asteroidCollision(int* asteroids, int asteroidsSize, int* returnSize) {
    int* stack = (int*)malloc(asteroidsSize * sizeof(int));
    int stackSize = 0;

    for (int i = 0; i < asteroidsSize; i++) {
        int currAsteroid = asteroids[i];
        bool hasCollision = true;

        while (stackSize > 0 && currAsteroid < 0 && stack[stackSize - 1] > 0) {
            if (abs(currAsteroid) == stack[stackSize - 1]) {
                stackSize--;
                hasCollision = false;
                break;
            } else if (abs(currAsteroid) > stack[stackSize - 1]) {
                stackSize--;
            } else {
                hasCollision = false;
                break;
            }
        }

        if (hasCollision) {
            stack[stackSize] = currAsteroid;
            stackSize++;
        }
    }

    int* result = (int*)malloc(stackSize * sizeof(int));
    for (int i = 0; i < stackSize; i++) {
        result[i] = stack[i];
    }

    *returnSize = stackSize;
    free(stack);
    return result;
}
