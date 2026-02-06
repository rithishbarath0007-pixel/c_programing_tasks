#include <stdio.h>
int main() {
    int n;
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        for (int s = 0; s < n - i - 1; s++)
            printf(" ");
        printf("*");
        if (i > 0) {
            for (int s = 0; s < 2*i - 1; s++)
                printf(" ");
            printf("*");
        }
        printf("\n");
    }
    for (int i = n - 2; i >= 0; i--) {
        for (int s = 0; s < n - i - 1; s++)
            printf(" ");
        printf("*");
        if (i > 0) {
            for (int s = 0; s < 2*i - 1; s++)
                printf(" ");
            printf("*");
        }
        printf("\n");
    }
    return 0;
}
