#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int numberOfCuts(int n) {
    if (n == 1) {
        return 0;
    } 
    else if (n % 2 == 0) {
        return n / 2;
    } 
    else {
        return n;
    }
}
}
