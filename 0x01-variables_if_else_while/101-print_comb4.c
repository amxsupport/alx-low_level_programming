/*
 * File: 101-print_comb4
 */

#include <stdio.h>

/**
 * main - Prints all possible combinations of three different digits,
 *        in ascending order, separated by a comma followed by a space.
 *
 * Return: Always 0.
 */
int main(void)
{
	int i1, j2, n3;

	for (i1 = 0; i1 < 8; i1++)
	{
		for (j2 = i1 + 1; j2 < 9; j2++)
		{
			for (n3 = j2 + 1; n3 < 10; n3++)
			{
				putchar((i1 % 10) + '0');
				putchar((j2 % 10) + '0');
				putchar((n3 % 10) + '0');

				if (i1 == 7 && j2 == 8 && n3 == 9)
					continue;
				
				putchar(',');
				putchar(' ');
			}
		}
	}

	putchar('\n');

	return (0);
}
