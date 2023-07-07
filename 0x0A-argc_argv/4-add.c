#include <stdio.h>
#include <stdlib.h>
/**
 * main - entry point for program
 *
 * @argc: count of args present
 * @argv: array of char * pointing to args
 *
 * Return: always 0 (success)
 */
int main(int argc, char *argv[])
{
	int i, sum = 0;

	for (i = 1; i < argc; i++)
	{
		if (!atoi(argv[i])) /* non numeric */
		{
			printf("Error\n");
			return (1);
		}
		else if (argc == 1) /* no arguments */
		{
			printf("%d\n", sum);
		}
		sum += atoi(argv[i]);
	}
	if (argc > 1)
	{
		printf("%d\n", sum);
	}

	return (0);
}
