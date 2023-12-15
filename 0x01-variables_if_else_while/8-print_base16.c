#include <stdio.h>

/**
* main - Entry point
*
* Return: - return 0
*/
int main(void)
{
	short a;

	for (a = 0; a < 10; a++)
	{
		putchar(a + '0');
	}
	for (a = 'a'; a <= 'f'; a++)
	{
		putchar(a);
	}
	putchar('\n');
	return (0);
}
