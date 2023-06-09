#include <stdio.h>

/**
 * main - entry point
 *
 * @ac: arg count
 * @av: arg victor
 *
 * Return: 0
 */

int main(int ac, char *av[])
{
	int i;

	for (i = 0; i <= ac - 1; i++)
		printf("%s\n", av[i]);
	return (0);
}
