#include "main.h"
#include <stddef.h>

/**
 * _printf - produces output according to a format
 * @format: character string containing zero or more directives
 *
 * Return: number of characters printed
 */
int _printf(const char *format, ...)
{
	va_list args;
	int count = 0, i = 0, j;
	char *s;

	if (!format || (format[0] == '%' && !format[1]))
		return (-1);
	if (format[0] == '%' && format[1] == ' ' && !format[2])
		return (-1);

	va_start(args, format);
	while (format[i])
	{
		if (format[i] != '%')
			count += _putchar(format[i]);
		else
		{
			i++;
			if (!format[i])
				return (-1);
			if (format[i] == 'c')
				count += _putchar(va_arg(args, int));
			else if (format[i] == 's')
			{
				s = va_arg(args, char *);
				if (!s)
					s = "(null)";
				for (j = 0; s[j]; j++)
					count += _putchar(s[j]);
			}
			else if (format[i] == '%')
				count += _putchar('%');
			else
			{
				count += _putchar('%');
				count += _putchar(format[i]);
			}
		}
		i++;
	}
	va_end(args);
	return (count);
}
