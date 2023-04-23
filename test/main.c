#include "main.h"
#include <stdio.h>

int main(void)
{
    int len;

    /* Test case 1 - printing a string */
    len = _printf("Hello, %s!\n", "world");
    printf("Length: %d\n", len);  // expected output: "Length: 14\n"
    

    /* Test case 2 - printing a character */
    len = _printf("The first letter of the alphabet is %c\n", 'A');
    printf("Length: %d\n", len);  // expected output: "Length: 36\n"
   

    /* Test case 3 - printing a percent sign */
    len = _printf("100%% of the time, it works every time.\n");
    printf("Length: %d\n", len);  // expected output: "Length: 44\n"
    

    /* Test case 4 - printing a number */
    len = _printf("The answer to life, the universe, and everything is %s\n", "42");
    printf("Length: %d\n", len);  // expected output: "Length: 45\n"
   

    /* Test case 5 - invalid format specifier */
    len = _printf("This %q is not a valid format specifier\n");
    printf("Length: %d\n", len);  // expected output: "Length: -1\n"
    
    len = _printf("123456%s8888\n", "brahim");
    printf("Length: %d\n", len);
    
    return (0);
}

