#include "main.h"

/**
 * print_unsigned - prints an unsigned int
 * @n: the unsigned integer
 * Return: number of characters printed
 */
int print_unsigned(unsigned int n)
{
	char buf[20];
	int i = 0, count = 0;

	if (n == 0)
		return (_putchar('0'));

	while (n > 0)
	{
		buf[i++] = (n % 10) + '0';
		n /= 10;
	}
	while (--i >= 0)
		count += _putchar(buf[i]);
	return (count);
}

/**
 * print_octal - prints an unsigned int in octal
 * @n: the unsigned integer
 * Return: number of characters printed
 */
int print_octal(unsigned int n)
{
	char buf[20];
	int i = 0, count = 0;

	if (n == 0)
		return (_putchar('0'));

	while (n > 0)
	{
		buf[i++] = (n % 8) + '0';
		n /= 8;
	}
	while (--i >= 0)
		count += _putchar(buf[i]);
	return (count);
}

/**
 * print_hex - prints an unsigned int in hexadecimal lowercase
 * @n: the unsigned integer
 * Return: number of characters printed
 */
int print_hex(unsigned int n)
{
	char buf[20];
	char *digits = "0123456789abcdef";
	int i = 0, count = 0;

	if (n == 0)
		return (_putchar('0'));

	while (n > 0)
	{
		buf[i++] = digits[n % 16];
		n /= 16;
	}
	while (--i >= 0)
		count += _putchar(buf[i]);
	return (count);
}

/**
 * print_HEX - prints an unsigned int in hexadecimal uppercase
 * @n: the unsigned integer
 * Return: number of characters printed
 */
int print_HEX(unsigned int n)
{
	char buf[20];
	char *digits = "0123456789ABCDEF";
	int i = 0, count = 0;

	if (n == 0)
		return (_putchar('0'));

	while (n > 0)
	{
		buf[i++] = digits[n % 16];
		n /= 16;
	}
	while (--i >= 0)
		count += _putchar(buf[i]);
	return (count);
}
