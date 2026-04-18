#include "main.h"

/**
 * print_binary - prints an unsigned int in binary
 * @n: the unsigned integer to convert
 * Return: number of characters printed
 */
int print_binary(unsigned int n)
{
	unsigned int binary[32];
	int i = 0, count = 0;

	if (n == 0)
		return (_putchar('0'));

	while (n > 0)
	{
		binary[i] = n % 2;
		i++;
		n /= 2;
	}

	i--;
	while (i >= 0)
	{
		count += _putchar(binary[i] + '0');
		i--;
	}

	return (count);
}
