#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strdup - returns a pointer to a newly allocated space in memory
 *
 * @str: string
 *
 * Return: pointer of NULL
 */

char *_strdup(char *str)
{
	int len, i;
	char array_t;

	if (str == NULL)
		return (NULL);
	for (len = 0; str[len] != '\0'; len++)
		;
	array_t = (char *)malloc(sizeof(char) * (len + 1));
	if (array_t == NULL)
		return (NULL);
	for (i = 0; i < len; i++)
		array_t[i] = str[i];
	return (array_t);
	free(array_t);
}
