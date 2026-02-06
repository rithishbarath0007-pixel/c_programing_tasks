#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int tribonacci(int n) {
    int a=0,b=1,c=1,sum;
    if (n == 0)
        return 0;
    if (n == 1 || n == 2) 
        return 1;
    for (int i = 3; i <= n; i++) {
        sum = a + b + c;
        a = b;
        b = c;
        c = sum;
    }
    return c;
}
int main() {
    int n;
    scanf("%d", &n);
    printf("%d", tribonacci(n));
    return 0;


}
