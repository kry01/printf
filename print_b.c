#include "main.h"
/**
 * print_b - function to print binary code.
 * @args: the positive number.
 *
 * Return: length.
 */

int print_b(va_list args)
{
	unsigned int n = va_arg(args, unsigned int);
	int binum[64];
	int i = 0, len = 0, j;

	if (n == 0)
	{
		_putchar('0');
		return (1);
	}

	while (n > 0)
	{
		binum[i++] = n % 2;
		n /= 2;
		len++;
	}

	for (j = len - 1; j >= 0; j--)
		_putchar(binum[j] + '0');
	return (len);
}
