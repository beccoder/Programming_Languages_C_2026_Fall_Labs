#include <stdio.h>

long long factorial(int n) {
    long long res = 1;
    for (int i = 2; i <= n; i++) {
        res *= i;
    }
    return res;
}

int main(void) {
    int n;

    printf("Enter n: ");
    if (scanf("%d", &n) != 1) {
        printf("Input error, please enter an integer.\n");
        return 1;
    }

    if (n < 0) {
        printf("Error, factorial is not defined for negative numbers.\n");
        return 1;
    }

    long long res = factorial(n);

    printf("%d! = %lld\n", n, res);
    
    return 0;
}