#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * str_concat - concatenates two strings.
 *
 * @s1: string 1
 * @s2: string 2
 *
 * Return: pointer or NULL
 */

char *str_concat(char *s1, char *s2)
{
	unsigned int i, len1, len2;
	char *array_t;

	for (len1 = 0; s1 != NULL && s1[len1] != '\0'; len1++)
		;
	for (len2 = 0; s2 != NULL && s2[len2] != '\0'; len2++)
		;
	array_t = (char *)malloc(sizeof(char) * (len1 + len2 + 1));
	if (array_t == NULL)
		return (NULL);
	for (i = 0; s1[i] != '\0'; i++)
		array_t[i] = s1[i];
	for (i = 0; s2[i] != '\0'; i++)
		array_t[len1 + i] = s2[i];
	return (array_t);
	free(array_t);
}
