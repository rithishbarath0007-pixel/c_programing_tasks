#include <stdio.h>

int main() {
    long long n;
    scanf("%lld", &n);

    if (n < 0) n = -n;

    if (n == 0) {
        printf("0 0");
        return 0;
    }

    int max = 0, min = 9;

    while (n > 0) {
        int d = n % 10;
        if (d > max) max = d;
        if (d < min) min = d;
        n /= 10;
    }

    printf("%d %d", max, min);
    return 0;
}