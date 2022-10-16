#include "main.h"

/**
 * _printf - function that produces output according to a format
 * @format: pointer to function
 * @...: parameter
 * Return: number of characters printed
 */

int _printf(const char *format, ...)
{
	int ch, i;
	va_list args;

	if (format == NULL)
		return (-1);

	va_start(args, format);

	for (i = 0; i < args; i++)
	{
		ch += printf(format, args[i], args[i]);
	}

	return (ch);
}
