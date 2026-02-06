#include <stdio.h>

int numWaterBottles(int numBottles, int numExchange) {
    int total = numBottles;
    int empty = numBottles;

    while (empty >= numExchange) {
        int newBottle = empty / numExchange;
        total = total + newBottle;
        empty = newBottle + (empty % numExchange);
    }
    return total;
}

int main() {
    int numBottles, numExchange;

    scanf("%d %d", &numBottles, &numExchange);

    int result = numWaterBottles(numBottles, numExchange);
    printf("%d", result);

    return 0;
}
