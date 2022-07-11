#include "main.h"

/**
* swap_int - a function that swaps the values of two integers.
* @a: an integer parameter 1.
* @b: an integer parameter 2.
*/
void swap_int(int *a, int *b)
{
int tmp;
tmp = *a;
*a = *b;
*b = tmp;
}
