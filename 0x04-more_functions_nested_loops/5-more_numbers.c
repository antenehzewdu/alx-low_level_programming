#include "main.h"

/**
* more_number - print more number
* Return:10 times of the number since 0 up to 14
*/
void more_numbers(void)
{
int x, y;
for (x = 0; x < 10; x++)
{
for (y = 0; y < 15; y++)
{
if (y > 9)
{
_putchar((y / 10) + '0');
}

_putchar((x % 10) + '0');
}
_putchar('\n');
}
}
