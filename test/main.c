#include "main.h"
#include <stdio.h>

int main(void)
{
    	int len;
	int x = 42;
	int* pc, c;
	
    /* Test case 1 - printing a string */
    len = _printf("Hello, %s!", "world");
    printf(" : %d\n", len);  
    

    /* Test case 2 - printing a character */
    len = _printf("The first letter of the alphabet is %c", 'A');
    printf(" : %d\n", len);  
   

    /* Test case 3 - printing a percent sign */
    len = _printf("100%% of the time, it works every time.");
    printf(" : %d\n", len);  
    

    /* Test case 4 - printing a number */
    len = _printf("The answer to life, the universe, and everything is %s", "42");
    printf(" : %d\n", len);  
   

    /* Test case 5 - invalid format specifier */
    len = _printf("This %q is not a valid format specifier");
    printf(" : %d\n", len);
    
    len = _printf("123456%s8888", "brahim");
    printf(" : %d\n", len);

    len = _printf("%p\n", NULL);
    printf(" ---- : %d\n", len);
    printf("%p\n", NULL);
    
    _printf("The value of x is %p\n", (void *) &x);
    printf("The value of x is %p\n", (void *) &x);
    
    
   
   c = 22;
   _printf("Address of c: %p\n", &c);
   printf("Address of c: %p\n", &c);
   printf("Value of c: %d\n\n", c); 
   
   pc = &c;
   _printf("Address of pointer pc: %p\n", pc);
   printf("Address of pointer pc: %p\n", pc);
   printf("Content of pointer pc: %d\n\n", *pc); 
   
   c = 11;
   _printf("Address of pointer pc: %p\n", pc);
   printf("Address of pointer pc: %p\n", pc);
   printf("Content of pointer pc: %d\n\n", *pc); 
   
   *pc = 2;
   _printf("Address of c: %p\n", &c);
   printf("Address of c: %p\n", &c);
   printf("Value of c: %d\n\n", c); 
    
    
    return (0);
}

