#include <stdio.h>

/**
* main - printing to 100
* Return: void
*/
int main(void)
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
printf("%x ", x);
}
x++
}
printf("\n");
return (0);
}
