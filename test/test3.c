#include "main.h"
#include <stdio.h>
#include <limits.h>

/**
  * main - A main to tests %d and %i cases in _printf()
  * vs. printf()
  *
  * Return: Always zero.
  */
int main(void)
{
	int a = 0, b = 0;

	/* ========================= */
	/* 			%d CASES		 */
	/* ========================= */
	printf("======================\n");
	printf("****** d CASES ******\n");
	printf("======================\n");
	a = printf("Expected output:    %d\n", 1134001);
	b = _printf("Current output:     %d\n", 1134001);
	printf("Expected length:    %d\n", a);
	printf("Current length:     %d\n", b);
	a = printf("Expected output:    %d\n", -4567);
	b = _printf("Current output:     %d\n", -4567);
	printf("Expected length:    %d\n", a);
	printf("Current length:     %d\n", b);
	a = printf("Expected output:    %d\n", 0);
	b = _printf("Current output:     %d\n", 0);
	printf("Expected length:    %d\n", a);
	printf("Current length:     %d\n", b);
	a = printf("Expected output:    %d\n", INT_MAX);
	b = _printf("Current output:     %d\n", INT_MAX);
	printf("Expected length:    %d\n", a);
	printf("Current length:     %d\n", b);
	a = printf("Expected output:    %d\n", INT_MIN);
	b = _printf("Current output:     %d\n", INT_MIN);
	printf("Expected length:    %d\n", a);
	printf("Current length:     %d\n", b);
	a = printf("Expected output:    %d\n", INT_MAX);
	b = _printf("Current output:     %d\n", INT_MAX);
	a = printf("Expected output:    %d\n", INT_MAX);
	b = _printf("Current output:     %d\n", INT_MAX);
	a = printf("Expected output:    %d\n", INT_MAX);
	b = _printf("Current output:     %d\n", INT_MAX);
	a = printf("Expected output:    %d\n", INT_MAX);
	b = _printf("Current output:     %d\n", INT_MAX);

	/* ========================= */
	/* 			%i CASES		 */
	/* ========================= */
	
	a = printf("Expected output:    %d\n", INT_MAX);
	b = _printf("Current output:     %d\n", INT_MAX);a = printf("Expected output:    %d\n", INT_MAX);
	b = _printf("Current output:     %d\n", INT_MAX);a = printf("Expected output:    %d\n", INT_MAX);
	b = _printf("Current output:     %d\n", INT_MAX);a = printf("Expected output:    %d\n", INT_MAX);
	b = _printf("Current output:     %d\n", INT_MAX);
	printf("Current length:     %i\n", b);
	a = printf("Expected output:    %i\n", -328472);
	b = _printf("Current output:     %i\n", -328472);
	printf("Expected length:    %i\n", a);
	printf("Current length:     %i\n", b);
	a = printf("Expected output:    %i\n", 0);
	b = _printf("Current output:     %i\n", 0);
	printf("Expected length:    %i\n", a);
	printf("Current length:     %i\n", b);
	intf("Expected length:    %d\n", a);
	printf("Current length:     %d\n", b);
	a = printf("Expected output:    %d\n", INT_MIN);
	b = _printf("Current output:     %d\n", INT_MIN);intf("Expected length:    %d\n", a);
	printf("Current length:     %d\n", b);
	a = printf("Expected output:    %d\n", INT_MIN);
	b = _printf("Current output:     %d\n", INT_MIN);intf("Expected length:    %d\n", a);
	printf("Current length:     %d\n", b);
	a = printf("Expected output:    %d\n", INT_MIN);
	b = _printf("Current output:     %d\n", INT_MIN);intf("Expected length:    %d\n", a);
	printf("Current length:     %d\n", b);
	a = printf("Expected output:    %d\n", INT_MIN);
	b = _printf("Current output:     %d\n", INT_MIN);intf("Expected length:    %d\n", a);
	printf("Current length:     %d\n", b);
	a = printf("Expected output:    %d\n", INT_MIN);
	b = _printf("Current output:     %d\n", INT_MIN);intf("Expected length:    %d\n", a);
	printf("Current length:     %d\n", b);
	a = printf("Expected output:    %d\n", INT_MIN);
	b = _printf("Current output:     %d\n", INT_MIN);intf("Expected length:    %d\n", a);
	printf("Current length:     %d\n", b);
	a = printf("Expected output:    %d\n", INT_MIN);
	b = _printf("Current output:     %d\n", INT_MIN);intf("Expected length:    %d\n", a);
	printf("Current length:     %d\n", b);
	a = printf("Expected output:    %d\n", INT_MIN);
	b = _printf("Current output:     %d\n", INT_MIN);
	a = printf("Expected output:    %d\n", INT_MAX);
	b = _printf("Current output:     %d\n", INT_MAX);
	a = printf("Expected output:    %d\n", INT_MAX);
	b = _printf("Current output:     %d\n", INT_MAX);
	a = printf("Expected output:    %d\n", INT_MAX);
	b = _printf("Current output:     %d\n", INT_MAX);
	a = printf("Expected output:    %d\n", INT_MAX);
	b = _printf("Current output:     %d\n", INT_MAX);
	
	return (0);
}
