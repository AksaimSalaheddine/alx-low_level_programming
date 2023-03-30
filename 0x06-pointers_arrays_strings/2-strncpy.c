/**
 * _strcat - function that concatenates two strings.
 * @dest: destintion
 * @src: surce
 *
 * Return: destintion.
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
