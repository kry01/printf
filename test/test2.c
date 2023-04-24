#include "main.h"
#include <stdio.h>

/**
  * main - A main to tests %c and %s cases in _printf()
  * vs. printf()
  *
  * Return: Always zero.
  */
int main(void)
{
	int len, num = -1;
	len = printf("Decimal: %u\n", num);
      printf(" : %d\n", len);	// Output: Decimal: 255
	len = printf("Octal: %o\n", num);
    printf(" : %d\n", len);	// Output: Octal:
	len = printf("Hexadecimal (lowercase): %x\n", num); 
       printf(" : %d\n", len);	// Output: Hexadecimal (lowercase): ff
	len = printf("Hexadecimal (uppercase): %X\n", num); 
       printf(" : %d\n", len);	// Output: Hexadecimal (uppercase): FFnt a = 0, b = 0;
	

	len = _printf("Decimal: %u\n", num);  // Output: Decimal: 255
	printf(" : %d\n", len);
	len = _printf("Octal: %o\n", num);    // Output: Octal:
	printf(" : %d\n", len);
	len = _printf("Hexadecimal (lowercase): %x\n", num);  // Output: Hexadecimal (lowercase): ff
	printf(" : %d\n", len);
	len = _printf("Hexadecimal (uppercase): %X\n", num);  // Output: Hexadecimal (uppercase): FFnt a = 0, b = 0;
	printf(" : %d\n", len);
	return (0);
}
