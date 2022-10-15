#include "main.h"

/**
 * _printf - function that produces output according to a format
 * @format: pointer to function
 * @...: parameter
 * Return: number of characters printed
 */

int _printf(const char *format, ...)
{
	int ch;

	ch = printf(format, ...);

	return (ch);
}
