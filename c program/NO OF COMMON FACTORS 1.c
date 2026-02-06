#include <stdio.h>

int gcd(int a, int b) {
    while (b != 0) {
        int t = a % b;
        a = b;
        b = t;
    }
    return a;
}

int main() {
    int a, b;
    scanf("%d %d", &a, &b);

    int g = gcd(a, b);
    int count = 0;

    for (int i = 1; i <= g; i++) {
        if (g % i == 0) count++;
    }

    printf("%d", count);
    return 0;
}
