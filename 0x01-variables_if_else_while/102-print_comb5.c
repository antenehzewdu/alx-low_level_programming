#include <stdio.h>
/**
* main - prints all possible combinations of two two-digit numbers.
*
* Return:always return 0
*
*/
int main(void)
{
int i;
int j;
for (i = 0; i <= 99; i++)
{
for (i = j; j <= 99; j++)
{
putchar((i / 10) + '0');
putchar((i % 10) + '0');
putchar((j / 10) + '0');
putchar((j % 10) + '0');
if (i == 99 && j == 99)
continue;
putchar(',');
putchar(' ');
}
}
putchar('\n');
return (0);
}
