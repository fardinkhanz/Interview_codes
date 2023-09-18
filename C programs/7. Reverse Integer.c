int reverse(int x) {
    int isNegative = 0;
    if (x < 0) {
        isNegative = 1;
        x = -(unsigned int)x;
    }
    long long reversedNumber = 0;
    while (x != 0) {
        reversedNumber = reversedNumber * 10 + x % 10;
        x /= 10;
    }
    if (reversedNumber >= INT_MAX || reversedNumber <= INT_MIN) {
        return 0;
    }
    return isNegative ? (int)(-reversedNumber) : (int)(reversedNumber);
}
