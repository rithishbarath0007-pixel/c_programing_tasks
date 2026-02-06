#include <stdio.h>

static long long power_int(int base, int exp) {
    long long result = 1;
    for (int i = 0; i < exp; i++) {
        result *= base;
    }
    return result;
}

int main(void) {
    long long n;
    if (scanf("%lld", &n) != 1) {
        return 0;
    }

    long long temp = n;
    int digits = 0;
    if (temp == 0) {
        digits = 1;
    } else {
        while (temp > 0) {
            digits++;
            temp /= 10;
        }
    }

    temp = n;
    long long sum = 0;
    if (temp == 0) {
        sum = 0;
    } else {
        while (temp > 0) {
            int digit = (int)(temp % 10);
            sum += power_int(digit, digits);
            temp /= 10;
        }
    }

    if (sum == n) {
        printf("true");
    } else {
        printf("false");
    }
    return 0;
}
