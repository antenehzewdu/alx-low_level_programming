#include <stdio.h>

/**
* fizz_buzz - printing to 100
* Return: void
*/
void fizz_buzz(void)
{
int x;
int p = 100;
while (x <= p)
{
if (x % 3 == 0 && x % 5 == 0)
{
printf("FizzBuzz ");
}
else if (x % 3 == 0)
{
printf("Fizz ");
}
else if (x % 5 == 0)
{
if (x < p)
printf("Buzz ");
else
printf("Buzz");
}
else
{
printf("%d ", x);
}
x++
}
printf("\n");
return (0);
}
