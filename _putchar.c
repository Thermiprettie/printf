#include <unistd.h>

/**
 * _putchar - character
 * @c: the character
 * Return: 1
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
