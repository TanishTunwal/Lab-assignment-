#include <stdio.h>

// Function to calculate the nth Fibonacci number recursively
int fibonacci(int n) {
    if (n <= 1) {
        return n;
    } else {
        return fibonacci(n - 1) + fibonacci(n - 2);
    }
}

int main() {
    int n = 10; // Number of terms in the Fibonacci series
    printf("Fibonacci Series up to %d terms:\n", n);
    for (int i = 0; i < n; i++) {
        printf("%d ", fibonacci(i));
    }
    return 0;
}
