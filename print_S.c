#include "main.h"

/**
 * print_S - prints a string with non-printable chars as \xHH
 * @str: the string to print
 * Return: number of characters printed
 */
int print_S(char *str)
{
	int count = 0;
	char *hex = "0123456789ABCDEF";

	if (!str)
		str = "(null)";

	while (*str)
	{
		if (*str < 32 || *str >= 127)
		{
			count += _putchar('\\');
			count += _putchar('x');
			count += _putchar(hex[*str / 16]);
			count += _putchar(hex[*str % 16]);
		}
		else
			count += _putchar(*str);
		str++;
	}
	return (count);
}
