#include <stdio.h>
/**
* main - print alphabet in lowercase
*
* Return:always return 0
*
*/
int main(void)
{
char a;
for (a = 'a'; a <= 'z'; a++)
putchar(a++);
putchar('\n');
return (0);
}
