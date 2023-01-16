#include "main.h"

/**
 * is_prime_numberr - checks if a number is prime
 * @n: number to check
 *
 * Return: 1 if prime, 0 otherwise
 */

int is_prime_number_tester(int n, int i) {
    if (i == n / 2) {
        return 1;
    }
    if (n % i == 0) {
        return 0;
    }
    return is_prime_number_tester(n, i + 2);
}

int is_prime_number(int n) {
    if (n < 2) {
        return 0;
    }
    if (n == 2) {
        return 1;
    }
    if (n % 2 == 0) {
        return 0;
    }
    return is_prime_number_tester(n, 3);
}






