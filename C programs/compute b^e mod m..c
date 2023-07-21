#include <stdio.h>

// Function to calculate (base^exponent) % mod
unsigned long long int powerMod(unsigned long long int base, unsigned long long int exponent, unsigned long long int mod) {
    unsigned long long int result = 1;

    while (exponent > 0) {
        // If the current exponent bit is 1, multiply the result with base and take modulo
        if (exponent & 1) {
            result = (result * base) % mod;
        }

        // Square the base and take modulo to reduce the exponent by half
        base = (base * base) % mod;

        // Shift the exponent to the right by 1
        exponent >>= 1;
    }
printf("%llu^%llu mod %llu = %llu\n", base, exponent, mod, result);
    return result;
}

int main() {
    unsigned long long int base, exponent, mod;

    printf("Enter the base: ");
    scanf("%llu", &base);

    printf("Enter the exponent: ");
    scanf("%llu", &exponent);

    printf("Enter the modulo: ");
    scanf("%llu", &mod);

    unsigned long long int result = powerMod(base, exponent, mod);
    printf("%llu^%llu mod %llu = %llu\n", base, exponent, mod, result);

    return 0;
}
