#include <stdio.h>
/**
* main - prints the alphabet in lowercase, and then in uppercase.
*
* Return:always return 0
*
*/
int main(void)
{
char letter;
for (letter = 'a'; letter <= 'z'; letter++)
putchar(letter0);
for (letter = 'A'; letter <= 'Z'; letter++)
putchar(letter);
putchar('\n');
return (0);
}
