#include "main.h"
#include <unistd.h>

/**
 * _putchar - writes the character c to stdout using a buffer
 * @c: The character to print, or -1 to flush the buffer
 *
 * Return: On success 1. On error, -1 is returned.
 */
int _putchar(char c)
{
	static char buf[1024];
	static int i;

	if (c == -1 || i >= 1024)
	{
		write(1, buf, i);
		i = 0;
	}
	if (c != -1)
	{
		buf[i] = c;
		i++;
	}
	return (1);
}
