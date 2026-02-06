#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);
    int start = 1;   
    for (int i = N; i >= 1; i--) {
        int num = start;
        for (int j = 1; j <= i; j++) {
            printf("%d", num);
            num = 1 - num;   
        }
        printf("\n");
        start = 1 - start;   
    }
    return 0;
}
