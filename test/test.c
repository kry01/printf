#include "main.h"
#include <stdio.h>

/**
 *  * main - Entry point
 *   *
 *    * Return: Always 0
 *     */
int main(void)
{
	int len;
	len = _printf("%S\n", "Best\tSchool");
	printf(": %d\n", len);
	len = _printf("%S\n", "Best\nSchool");
	printf(": %d\n", len);
	len = _printf("%S\n", "Best\rSchool");
	printf(": %d\n", len);
	len = _printf("%S\n", "Best\aSchool");
	printf(": %d\n", len);
	len = _printf("%S\n", "Best\bSchool");
	printf(": %d\n", len);
	len = _printf("%S\n", "Best\vSchool");
	printf(": %d\n", len);
	len = _printf("%S\n", "Best\fSchool");
	printf(": %d\n", len);
	a = printf("Expected output:    %d\n", INT_MAX);
	b = _printf("Current output:     %d\n", INT_MAX);
	a = printf("Expected output:    %d\n", INT_MAX);
	b = _printf("Current output:     %d\n", INT_MAX);
	
	return (0);
}
