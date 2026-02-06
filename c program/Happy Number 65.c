#include <stdio.h>
int squareSum(int n) {
    int sum = 0;
    while (n > 0) {
        int d = n % 10;
        sum += d * d;
        n /= 10;
    }
    return sum;
}
int isHappy(int n) {
    while (n != 1 && n != 4) {
        n = squareSum(n);
    }
    return n == 1;
}
int main() {
    int n;
    scanf("%d", &n);

    if (isHappy(n))
        printf("true");
    else
        printf("false");
    return 0;
}

