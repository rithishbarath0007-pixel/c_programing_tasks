#include <stdio.h>
#include <math.h>

int main() {
    long long n, temp, sum = 0;
    int digits = 0;
    
    scanf("%lld", &n);
    
    temp = n;
    
    // Count the number of digits
    while (temp > 0) {
        digits++;
        temp /= 10;
    }
    
    // If n is 0, it has 1 digit and 0^1 = 0
    if (n == 0) {
        digits = 1;
    }
    
    temp = n;
    
    // Calculate the sum of digits raised to the power of number of digits
    while (temp > 0) {
        int digit = temp % 10;
        sum += pow(digit, digits);
        temp /= 10;
    }
    
    // Check if the sum equals the original number
    if (sum == n) {
        printf("true\n");
    } else {
        printf("false\n");
    }
    
    return 0;
}
