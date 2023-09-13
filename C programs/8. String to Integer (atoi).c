
int myAtoi(char *s) {
    while (isspace(*s) && *s) {
        s++;
    }
    if (*s == '\0') {
        return 0;
    }
    int sign = 1;
    if (*s == '-') {
        sign = -1;
        s++;
    } else if (*s == '+') {
        s++;
    }
    long long num = 0;
    while (isdigit(*s) && *s) {

        if (num > (LLONG_MAX - (*s - '0')) / 10) {
            if (sign == 1) {
                return INT_MAX;
            } else {
                return INT_MIN;
            }
        }
        num = num * 10 + (*s - '0');
        s++;
    }
    num *= sign;
    if (num > INT_MAX) {
        return INT_MAX;
    } else if (num < INT_MIN) {
        return INT_MIN;
    }
    return (int)num;
}
