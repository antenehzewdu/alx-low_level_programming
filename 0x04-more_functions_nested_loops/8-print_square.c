#include "main.h"

/**
* print_square - a function that prints a square
* @size:is the size of the square
*/
void print_square(int size)
{
int x, y;
if (size <= 0)
{
_putchar('\n');
}
for (x = 0; x < size; x++)
{
for (y = 0; y < x; y++)
{
_putchar(35);
}
_putchar('\n');
}
}
