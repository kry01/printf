#include "main.h"
#include <stdio.h>

int main(void)
{
    int len;

    /* Test case 1 - printing a string */
    len = _printf("Hello, %s!", "world");
    printf(" : %d\n", len);  // expected output: "Length: 14"
    

    /* Test case 2 - printing a character */
    len = _printf("The first letter of the alphabet is %c", 'A');
    printf(" : %d\n", len);  // expected output: "Length: 36\n"
   

    /* Test case 3 - printing a percent sign */
    len = _printf("100%% of the time, it works every time.");
    printf(" : %d\n", len);  // expected output: "Length: 44\n"
    

    /* Test case 4 - printing a number */
    len = _printf("The answer to life, the universe, and everything is %s", "42");
    printf(" : %d\n", len);  // expected output: "Length: 45\n"
   

    /* Test case 5 - invalid format specifier */
    len = _printf("This %q is not a valid format specifier");
    printf(" : %d\n", len);  // expected output: "Length: -1\n"
    
    len = _printf("123456%s8888", "brahim");
    printf(" : %d\n", len);

    len = _printf("%d", NULL);
    printf(" ---- : %d\n", len);
    printf("%d", NULL);
    
    return (0);
}

