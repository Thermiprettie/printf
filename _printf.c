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
	va_list args;

	if (format == NULL)
		return (-1);

	va_start(args, format);
	
	ch = printf(format, args, args);

	return (ch);
}
