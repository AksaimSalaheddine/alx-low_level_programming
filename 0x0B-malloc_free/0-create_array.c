#include "main.h"

/**
 * create_array - creates an array of chars.
 *
 * @size: size of the array
 * @c: first character
 *
 * Return: pointer of NULL
 */

char *create_array(unsigned int size, char c)
{
	char *array_t;
	unsigned int i;

	array_t = (char *)malloc(size * sizeof(char));
	if (array_t == NULL || size == 0)
		return (NULL);
	for (i = 0; i < size; i++)
		array_t[i] = c;
	return (array_t);
	free(array_t);
}
