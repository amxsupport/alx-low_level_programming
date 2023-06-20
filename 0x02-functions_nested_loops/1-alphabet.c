#include "main.h"

/**
 * main - Print alphabet in lowercase
 *
 * Return: Always (0) Sucsses;
 */
void print_alphabet(void)
{
	char lettre;

	for (lettre = 'a'; lettre <= 'z'; lettre++)
		_putchar(lettre);

	_putchar('\n');
}
