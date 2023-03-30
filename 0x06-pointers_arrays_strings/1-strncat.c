/**
 * _strncat - function that concatenates two strings.
 * @dest: destintion
 * @src: surce
 * @n: number of charcter to cpy
 *
 * Return: destintion.
 */
char *_strncat(char *dest, char *src, int n)
{
	int i, leng = 0;

	while (dest[leng] != '\0')
		leng++;
	for (i = 0; src[i] != '\0'; i++, leng++)
	{
		if (i < n)
			dest[leng] = src[i];
	}
	dest[leng] = '\0';
	return (dest);
}
