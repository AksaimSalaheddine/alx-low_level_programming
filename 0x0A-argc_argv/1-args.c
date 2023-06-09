#include <stdio.h>

/**
 * main - entry point
 *
 * @ac: arg count
 * @av: arg victor
 *
 * Return: 0
 */

int main(int ac, char *av[] __attribute__((unused)))
{
	printf("%i\n", ac - 1);
	return (0);
}
