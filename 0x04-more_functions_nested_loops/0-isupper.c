#include "main.h"

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _isupper(int c)
{
    while (c >= 'A' && c <= 'Z')
    {
        return 1;
    }
    return 0;
}
