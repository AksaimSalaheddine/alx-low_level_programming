#include <stdio.h>

/**
* main - Entery point
*
* Return: - return 0
*/
int main(void)
{
	int my;

	for (my = 'z'; my >= 'a'; my--)
	{
		putchar(my);
	}
	putchar('\n');
	return (0);
}
