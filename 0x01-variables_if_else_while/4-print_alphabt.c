#include <studio.h>
/**
* main -prints the alphabet in lowercase, followed by a new line.
*
* Return:always return 0
*
*/
int main(void)
{
char letter;
for (letter = 'a'; letter <= 'z'; letter++)
{
if (letter != 'e' && letter != 'q')
putchar(letter)
}
putchar('\n');
return (0);
}
