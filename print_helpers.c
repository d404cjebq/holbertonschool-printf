#include "main.h"

/**
 * print_string - prints a string
 * @s: string to print
 *
 * Return: number of characters printed
 */
int print_string(char *s)
{
	int count = 0, i;

	if (!s)
		s = "(null)";

	for (i = 0; s[i]; i++)
		count += _putchar(s[i]);

	return (count);
}

/**
 * print_int - prints an integer
 * @n: integer to print
 *
 * Return: number of characters printed
 */
int print_int(int n)
{
	unsigned int n1;
	int count = 0;

	if (n < 0)
	{
		count += _putchar('-');
		n1 = -n;
	}
	else
		n1 = n;

	if (n1 / 10)
		count += print_int(n1 / 10);

	count += _putchar((n1 % 10) + '0');

	return (count);
}
