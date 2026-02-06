#include <stdio.h>
int main() {
    int N;
    scanf("%d", &N);
    int mid = N / 2;
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            if (i == j || i + j == N - 1 || i == mid || j == mid)
                printf("* ");
            else
                printf("  ");
        }
        printf("\n");
    }
    return 0;
}
