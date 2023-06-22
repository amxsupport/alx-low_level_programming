/*
 * file : 100-prime_factor.c
 */

#include <stdio.h>
#include <math.h>
/*
 * main - find and print the largest prime factor of the number
 *
 * Return: always(0) 
 */
int main (void)
{
	long n = 612852475143;

	while (n % 2 == 0)
	{
		n = n / 2;
	}
	for (int i = 3; i <= sqrt(n); i += 2)
	{
		while (n % i == 0)
		{
			n = n / i;
		}
	}
	if (n > 2)
	{
		printf("%ld\n", n);
	}

	return (0);
}
