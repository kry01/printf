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
	int num = va_arg(args, int);
	int digits = 0;
	int temp = num;
	int digit;

	if (num < 0)
	{
		counter += _putchar('-');
		num = -num;
		temp = num;
	}

	do {
		digits++;
		temp /= 10;
	} while (temp != 0);

	while (digits > 0)
	{
		int pow10 = 1;
		int i;

		for (i = 1; i < digits; i++)
		{
			pow10 *= 10;
		}
		digit = num / pow10;
		counter += _putchar(digit + '0');
		num -= digit * pow10;
		digits--;
	}
	return (counter);
}
