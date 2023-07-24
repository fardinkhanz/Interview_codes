

bool isCloseToZero(double x) {
    double threshold = 1e-6;
    return x > -threshold && x < threshold;
}

double myPow(double x, int n) {
    double result = 1;
    if (n == 0) {
        return 1;
    }
    if (isCloseToZero(x)) {
        return 0;
    }
    if (n == -2147483648) {
        // Special handling for x^n when n is the minimum value of int.
        double half_power = myPow(x, -(n / 2)); // Using -(n / 2) avoids overflow.
        return 1.0 / (half_power * half_power);
    } else if (n < 0) {
        x = 1 / x;
        n = -n; // Invert the sign of n to handle negative exponents.
    }
    while (n > 0) {
        if (n % 2 == 1) {
            result *= x;
        }
        x = x * x;
        n >>= 1;
    }
    return result;
}
