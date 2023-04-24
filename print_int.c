#include "main.h"

/**
 * print_int - prints an integer.
 * only using the putchar function.
 * noarrays and pointers.
 * @args: integer to be printed.
 * @counter: count the digits.
 * Return: void.
 */

int print_int(va_list args, int counter)
{
	long int n = va_arg(args, int);
	int dgs = 0;
	long int num = n;
	int dg;

	if (n < 0)
	{
		counter += _putchar('-');
		n = n * -1;
		num = n;
	}

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
