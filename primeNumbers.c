#include <stdio.h>

// Function to check if a number is prime
int isPrime(int num) {
    if (num <= 1)
        return 0; // Not prime

    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0)
            return 0; // Not prime
    }

    return 1; // Prime
}


int main() {
    int n;

    printf("Enter the value of n: ");
    scanf("%d", &n);

    printf("Prime numbers between 1 and %d are:\n", n);

    // Iterate from 1 to n and check for prime numbers
    for (int i = 2; i <= n; i++) {
        if (isPrime(i))
            printf("%d ", i);
    }

    printf("\n");

    return 0;
}