#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int main() {
    long long n, temp, sum = 0;
    int digits = 0;    
    scanf("%lld", &n);  
    temp = n;
    while (temp > 0) {
        digits++;
        temp /= 10;
    }
    if (n == 0) {
        digits = 1;
    }
    temp = n;
    while (temp > 0) {
        int digit = temp % 10;
        sum += pow(digit, digits);
        temp /= 10;
    }
    if (sum == n) {
        printf("true\n");
    } else {
        printf("false\n");
    }
    return 0;
}
