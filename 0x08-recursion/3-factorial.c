/*
 * file : 3-factorial.c
 */
#include "main.h"

/**
 * factorial - function that return the factorial of number
 *
 * @n : the input int to factorate.
 *
 * Return: If n > 0 - the factorial of n.
 *         If n < 0 - 1 to indicate an error.
 */
int factorial(int n)
{
	int res = n;

	if (n < 0)
		return (-1);
	if (n == 0)
		return (1);
	return (n * factorial(n - 1));
}
