#include <stdio.h>

int fact(int n) {
    int f = 1;
    for (int i = 1; i <= n; i++)
        f = f * i;
    return f;
}

int main() {
    int T;
    scanf("%d", &T);

    while (T--) {
        long long n, temp, sum = 0;
        scanf("%lld", &n);

        temp = n;

        while (temp > 0) {
            int digit = temp % 10;
            sum = sum + fact(digit);
            temp = temp / 10;
        }

        if (sum == n)
            printf("YES\n");
        else
            printf("NO\n");
    }

    return 0;
}
