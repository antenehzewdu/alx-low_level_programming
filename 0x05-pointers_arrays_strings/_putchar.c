#include <stdio.h>

/**
* _putchar - write a character c to sdout
* @c: The character to print
*
* Retuern: On success 1.
* On error, -1 is returned, and errno is set appropriatly.
*/
int _putchar(char c)
{
return (write(1, &c, 1));
}
