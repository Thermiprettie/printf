#include "main.h"

/**
* print_p - print a
*@va:argument
*
* Return: length
*/
int print_p(va_list va)
{
	void *p;
	char *n = "(nil)";
	long int cast;
	int a, i;

	p = va_arg(va, void*);
	if (p == NULL)
	{
		for (i = 0; n[i] != '\0'; i++)
			_putchar(n[i]);
		return (i);
	}
	cast = (unsigned long int)p;
	_putchar('0');
	_putchar('x');
	a = print_p_1(cast);
	return (a + 2);
}
/**
 * print_p_1 - print a
 *@c:unsigned long int to convert in hexa
 *
 * Return: length
 */
int print_p_1(unsigned long int c)
{
	int  i, j, temp;
	int arr[100];

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
 * print_r - Entry point
 * @va: pointer the string we want to reverse and print
 *
 * Return: no return
 */
int print_r(va_list va)
{
	int i, j;
	char *s;
	char n[] = "(null)";


	s = va_arg(va, char *);
	i = 0;
	if (s == NULL)
	{
		for (i = 0; n[i] != '\0'; i++)
			_putchar(n[i]);
		return (6);
	}
	j = 0;
	while (s[j] != '\0')
		j++;
	for (i = j - 1; i >= 0; i--)
		_putchar (s[i]);
	return (j);
}
