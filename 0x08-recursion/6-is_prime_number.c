#include "main.h"

/**
 * checkpr - checks if n is a prime number
 * @n: int
 * @xx: int
 *
 * Return: 1 n is prime, 0 otherwise
 */
int check_pr(int n, int xx)
{
if (n % xx == 0)
return (0);
if (xx > n / 2)
return (1);
return (check_pr(n, xx + 1));
}
/**
 * is_prime_number - states if number is prime
 * @n: int
 *
 * Return: 1 if prime, 0 otherwise
 */
int is_prime_number(int n)
{
if (n <= 1)
return (0);
return (check_pr(n, 2));
}
