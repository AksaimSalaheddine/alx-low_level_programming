#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * string_nconcat - concatenates two strings.
 *
 * @s1: string 1
 * @s2: string 2
 * @n: number of bytes from s2
 *
 * Return: Pointer or NULL
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *str;
	unsigned int len1, len2;
	unsigned int i, j;

	for (len1 = 0; s1[len1] != '\0' && s1 != NULL; len1++)
		;
	for (len2 = 0; s2[len2] != '\0' && s2 != NULL; len2++)
		;
	if (n >= len2)
		str = (char *)malloc(sizeof(char) * (len1 + len2 + 1));
	else
		str = (char *)malloc(sizeof(char) * (len1 + n + 1));
	if (str == NULL)
		return (NULL);

	for (i = 0; i < len1 && s1 != NULL; i++)
		str[i] = s1[i];
	for (j = 0; s2 != NULL && j < n; j++)
		str[i + j] = s2[j];
	str[len1 + n] = '\0';
	return (str);
	free(str);
}
