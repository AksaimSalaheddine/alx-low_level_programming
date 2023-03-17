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
		putchar(my);
	}
	for (my = 'A'; my <= 'Z'; my++)
	{
		putchar(my);
	}
	putchar('\n');
	return (0);
}
