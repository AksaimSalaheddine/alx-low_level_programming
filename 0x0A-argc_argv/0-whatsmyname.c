#include <stdio.h>

/**
*main - entry point
*
* @ac: argemunt count
* @av: argement victor
*
* Return: 0
*/

int main(int ac, char **av)
{
	if (ac > 0)
	{
		printf("this is my name: %s\n", av[0]);
	}
	return (0);
}
