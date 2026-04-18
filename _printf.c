#include "main.h"

/**
 * _printf - produces output according to a format
 * @format: character string containing zero or more directives
 *
 * Return: number of characters printed
 */
int _printf(const char *format, ...)
{
	va_list args;
	int count = 0, i = 0;

	if (!format || (format[0] == '%' && (!format[1] || (format[1] == ' ' && !format[2]))))
		return (-1);

	va_start(args, format);
	while (format[i])
	{
		if (format[i] == '%')
		{
			i++;
			if (!format[i])
				return (-1);
			if (format[i] == 'c')
				count += _putchar(va_arg(args, int));
			else if (format[i] == 's')
				count += print_string(va_arg(args, char *));
			else if (format[i] == 'd' || format[i] == 'i')
				count += print_int(va_arg(args, int));
			else if (format[i] == '%')
				count += _putchar('%');
			else if (format[i] == 'b')
				count += print_binary(va_arg(args, unsigned int));
			else if (format[i] == 'u')
				count += print_unsigned(va_arg(args, unsigned int));
			else if (format[i] == 'o')
				count += print_octal(va_arg(args, unsigned int));
			else if (format[i] == 'x')
				count += print_hex(va_arg(args, unsigned int));
			else if (format[i] == 'X')
				count += print_HEX(va_arg(args, unsigned int));
	                else if (format[i] == 'S')
                                count += print_S(va_arg(args, char *));
			else
			{
				count += _putchar('%');
				count += _putchar(format[i]);
			}
		}
		else
			count += _putchar(format[i]);
		i++;
	}
	va_end(args);
	return (count);
}
