#include "main.h"
#include <string.h>
/**
* print_rev -  a function that prints a string in reverse
* @s: a parameter
*/
void print_rev(char *s)
{
int i, n;
n = strlen(s);
for (i = n - 1; i >= 0; i--)
{
_putchar(s[i]);
}
}
