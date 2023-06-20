#include "main.h"
/**
 * print_alphabet_x10 - print alphabet x 10 times
 */
void print_alphabet_x10(void)
{
	int i;
	char lettre;

	for (i = 0; i < 10; i++)
	{
		for (lettre = 'a'; lettre <= 'z'; lettre++)
			_putchar(lettre);
		_putchar('\n');
	}
}
