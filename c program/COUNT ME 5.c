#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

   long long n;
    int digits = 0;

    if (scanf("%lld", &n) != 1) {
        return 0;
    }

    if (n == 0) {
        digits = 1;
    } else {
        while (n > 0) {
            digits++;
            n /= 10;
        }
    }

    printf("%d", digits);
}
