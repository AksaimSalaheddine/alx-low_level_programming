#include <stdio.h>

/**
* main - Entery point
*
* Return: - return 0
*/
int main(void)
{
	int my;

	for (my = 'a'; my <= 'z'; my++)
	{
	if (my != 'q' && my != 'e')
	{
		putchar(my);
	}
	}
	putchar('\n');
	return (0);
}
