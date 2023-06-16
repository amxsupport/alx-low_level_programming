/*
 * file : 5-print_numbers.c
 */
#include <stdio.h>
/**
* main - Print all single digit number of base 10 statrting from 0.
*
* Return: Always 0.
*/
int main(void)
{
	int i;

	for (i = 0, i <= 9, i++)
	{
		printf("%d", i);
	}
	printf("\n");

	return (0);
}
