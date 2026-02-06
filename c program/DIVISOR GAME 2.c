#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int n;
    scanf("%d", &n);

    if (n % 2 == 0)
        printf("true");
    else
        printf("false");

    return 0;
}
