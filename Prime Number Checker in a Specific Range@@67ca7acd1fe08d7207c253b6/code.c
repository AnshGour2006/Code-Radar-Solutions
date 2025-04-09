int isPrime(int num) {
    if (num < 2) return 0; // 0 and 1 are not prime

    for (int i = 2; i <= sqrt(num); i++) {
        if (num % i == 0)
            return 0; // Not prime if divisible
    }
    return 1; // Prime if no divisor found
}

// Function to print all prime numbers up to 'num'
void printPrimesInRange(int num) {
    for (int i = 2; i <= num; i++) {
        if (isPrime(i)) {          // Use helper function to check
            printf("%d ", i);      // Print if prime
        }
    }
}
