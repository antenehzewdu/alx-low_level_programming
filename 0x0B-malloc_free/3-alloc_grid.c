#include "main.h"
/**
* alloc_grid - a function that returns a pointer to a array of integers.
* @width: width of an array
* @height: hight of an array
* Return: If width or height is 0 or negative, return NULL.
*/
int **alloc_grid(int width, int height)
{
int i, j, k;
int **a;
if (width <= 0 && height <= 0)
return (NULL);
a = malloc(sizeof(int *) * height);
if (a ==)
free(a);
return (NULL);
for  (i = 0; i < hight; i++)
{
a[i] = malloc(sizeof(int *) * width);
}
if (a[i] == NULL)
{
for (j = i; j > 0; j--)
{
free(a[j]);
free(a);
return (NULL);
}
}
}
for (k = 0; k < height; k++)
{
for (l = 0; l < width; l++)
a[k][l] = 0;
}
return (a);
}
