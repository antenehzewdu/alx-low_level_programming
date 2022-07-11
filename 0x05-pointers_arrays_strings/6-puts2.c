#include "main.h"
#include <string.h>
/**
* puts2 - a function that prints every other character of a string
* @str: a pointer parameter
*/
void puts2(char *str)
{
int i, len;
len = strlen(str);
for (i = 0; i < len; i++)
_putchar(str[i]);
_putchar('\n');
}
