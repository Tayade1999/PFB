#include <stdio.h>

int isPrime(int number) {
    if (number <= 1) {
        return 0;  
        // Numbers less than or equal to 1 are not prime
    }

    for (int i = 2; i * i <= number; i++) {
        if (number % i == 0) {
            return 0;  
        // Number is divisible by i, hence not prime
        }
    }

    return 1;
        // Number is prime
}

int main() {
    int number;

    printf("Enter a positive integer: ");
    scanf("%d", &number);

    if (isPrime(number)) {
        printf("%d is a prime number.\n", number);
    } else {
        printf("%d is not a prime number.\n", number);
    }

    return 0;
}

