#include <stdio.h>

int sum_to_n(int n) {
    int sum = 0;
    for (int i = 1; i <= n; i++) {
        sum += i;
    }
    return sum;
}

int main(void) {
    int n;

    printf("Enter n: ");
    if (scanf("%d", &n) != 1) {
        printf("Input error, please enter an integer\n");
        return 1;
    }

    if (n < 1) {
        printf("Error, n must be >= 1.\n");
        return 1;
    }

    int sum = sum_to_n(n);

    printf("Sum of 1 to %d = %d\n", n, sum);
    return 0;
}