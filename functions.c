#include "main.h"
#include <stdio.h>
#include <stdarg.h>
/**
 * print_c - prints character
 * @args: character argument
 * Return: number of characters
 */
int print_c(va_list args)
{
	int c;

	c = va_arg(args, int);
	return (_putchar(c));
}
/**
 * print_s - prints a string
 * @args: string  argument
 * Return: number of characters
 */
int print_s(va_list args)
{
	int i, count = 0;
	char *str;

	i = 0;
	str = va_arg(args, char*);
	if (str == NULL)
		str = "(null)";
	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i++;
		count++;
	}
	return (count);
}
/**
 * print_percent - pass the percent sing
 * @args: string  argument
 * Return: return the percent sing
 *
 */
int print_percent(va_list args)
{
	char *str;

	str = "%";
	if (va_arg(args, int) == *str)
	{
		return (*str);
	}
	return (*str);
}

/**
 * print_d - prints a decimal
 * @args: decimal argument
 * Return: counter
 */
int print_d(va_list args)
{

	unsigned int absolute, aux, countnum, count;
	int n;

	count = 0;
	n = va_arg(args, int);
		if (n < 0)
		{
			absolute = (n * -1);
			count += _putchar('-');
		}
		else
			absolute = n;

	aux = absolute;
	countnum = 1;
	while (aux > 9)
	{
		aux /= 10;
		countnum *= 10;
	}
	while (countnum >= 1)
	{
		count += _putchar(((absolute / countnum) % 10) + '0');
		countnum /= 10;
	}
	return (count);
}
/**
 * print_i - prints integer
 * @args: integer argument
 * Return: the decimal function
 */

int print_i(va_list args)
{
	return (print_d(args));
}
/**
 * print_b - prints unsigned
 * @args: integer argument
 * Return: the decimal function
 */
int print_b(va_list va)
{
	unsigned int c;
	int  i, j;
	int arr[100];

	c = va_arg(va, int);
	i = 0;
	if (c == 0)
	{
		_putchar('0');
		return (1);
	}
	while (c > 0)
	{
		arr[i] = c % 2;
		c = c / 2;
		i++;
	}
	for (j = i - 1; j >= 0; j--)
		_putchar(arr[j] + '0');
	return (i);
}

/**
 * print_u - prints u
 * @args: arguments
 * Return: int
 */

int print_u(va_list va)
{
	int i, len, r, l;
	long int  num, numt;
	unsigned int n = va_arg(va, unsigned int);

	len = 0;
	i = 0;
	r = 1;
	l = 1;
	num = n;
	while (num > 0)
	{
		num /= 10;
		i++;
	}
	while (r < i)
	{
		l *= 10;
		r++;
	}
	while (l >= 1)
	{
		numt = (n / l) % 10;
		_putchar(numt + '0');
		len++;
		l /= 10;
	}
	return (len);
}

/**
 * print_o - print o
 * @args: arguments
 * Return: int
 */
int print_o(va_list va)
{
	unsigned int c;
	int  i, j;
	int arr[100];

	c = va_arg(va, unsigned int);
	i = 0;
	if (c == 0)
	{
		_putchar('0');
		return (1);
	}
	while (c != 0)
	{
		arr[i] = c % 8;
		c = c / 8;
		i++;
	}
	for (j = i - 1; j >= 0; j--)
		_putchar(arr[j] + '0');
	return (i);
}

/**
 * print_x - print x
 * @args: arguments
 * Return: int
 */

int print_x(va_list va)
{
	unsigned int c;
	int  i, j, temp;
	int arr[100];

	c = va_arg(va, unsigned int);
	i = 0;
	temp = 0;
	if (c == 0)
	{
		_putchar('0');
		return (1);
	}
	while (c != 0)
	{
		temp = c % 16;
		if (temp < 10)
			arr[i] = 48 + temp;
		else
			arr[i] = 87 + temp;
		c = c / 16;
		i++;
	}
	for (j = i - 1; j >= 0; j--)
		_putchar(arr[j]);
	return (i);
}

/**
 * print_X - prints X
 * @va: unsigned int
 * Return: int
 */
int print_X(va_list va)
{
	unsigned int c;
	int  i, j, temp;
	int arr[100];

	c = va_arg(va, unsigned int);
	i = 0;
	temp = 0;
	if (c == 0)
	{
		_putchar('0');
		return (1);
	}
	while (c != 0)
	{
		temp = c % 16;
		if (temp < 10)
			arr[i] = 48 + temp;
		else
			arr[i] = 55 + temp;
		c = c / 16;
		i++;
	}
	for (j = i - 1; j >= 0; j--)
		_putchar(arr[j]);
	return (i);
}

