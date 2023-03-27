#include "main.h"

/**
 * swap_int - swap two integers
 * @a: Input
 * @b: Input 2
 *
 * Return: n
 */

void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
