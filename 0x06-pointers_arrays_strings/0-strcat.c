/**
 * _strcat - function that concatenates two strings.
 * @dest: destintion
 * @src: surce
 *
 * Return: destintion.
 */
char *_strcat(char *dest, char *src)
{
	int i, leng = 0;

	while (dest[leng] != '\0')
		leng++;
	for (i = 0; src[i] != '\0'; i++, leng++)
	{
		dest[leng] = src[i];
	}
	dest[leng] = '\0';
	return (dest);
}
