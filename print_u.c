#include "main.h"

/**
 * print_u - prints an positive integer.
 * @args: integer to be printed.
 * Return: void.
 */

int print_u(va_list args)
{
	long int n = va_arg(args, int);
	long int num = n;
	int dgs = 0, dg, counter = 0;

	do {
		dgs++;
		num /= 10;
	} while (num != 0);

	while (dgs > 0)
	{
		int pow10 = 1;
		int i;

		for (i = 1; i < dgs; i++)
		{
			pow10 *= 10;
		}
		dg = n / pow10;
		counter += _putchar(dg + '0');
		n -= dg * pow10;
		dgs--;
	}
	return (counter);
}
