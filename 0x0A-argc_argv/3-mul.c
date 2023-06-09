#include <stdio.h>
#include <stdlib.h>

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
	int ar1 = atoi(av[1]);
	int ar2 = atoi(av[2]);

	if (ac != 3)
		printf("Error\n");
	else
		printf("%i\n", ar1 * ar2);
	return (0);
}
