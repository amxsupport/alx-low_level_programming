/*
 * File: 6-is_prime_number.c
 *
 */

#include "main.h"

int isPrimeRecursive(int n, int divisor);
int is_prime_number(int n);

/**
 * isPrimeRecursive - Checks if a number is divisible.
 *
 * @n: The number to be checked.
 * @divisor: The divisor.
 *
 * Return: If the number is divisible - 0.
 *         If the number is not divisible - 1.
*/
int isPrimeRecursive(int n, int divisor)
{
	if (n <= 1)
		return (0);
	if (divisor == 1)
		return (1);
	if (n % divisor == 0)
		return (0);
	return (isPrimeRecursive(n, divisor - 1));
}

/**
 * is_prime_number - Checks if a number is prime.
 *
 * @n: The number to be checked.
 *
 * Return: If the integer is not prime - 0.
 *         If the number is prime - 1.
*/
int is_prime_number(int n)
{
	return (isPrimeRecursive(n, n - 1));
}
