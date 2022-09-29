#include "main.h"

/**
 * tester - checks if number is prime
 * @base: iterator
 * @n: number
 * Return: if number is prime or not
 */
int tester(int n, int base)
{
	if (n == base)
		return (1);
	if (n % base == 0)
		return (0);
	return (tester(n, base + 1));
}
/**
 * is_prime_number - returns 1 if the input is a prime number and zero if
 * otherwise
 * @n: number
 * Return: 1 if number is prime and zero if ootherwise
 */

int is_prime_number(int n)
{
	if (n <= 1)
		return (0);

	return (tester(n, 2));
}
