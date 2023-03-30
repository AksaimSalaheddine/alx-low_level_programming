/**
 * string_toupper- changes all lowercase letters of a string to uppercase.
 * @s: string to change
 * Return: string.
 */
char *string_toupper(char *s)
{
	int i;

	for (i = 0; i >= 97 && i <= 122; i++)
	{
		s[i] -= 32;
	}
	return (s);

}
