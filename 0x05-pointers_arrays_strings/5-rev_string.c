#include "main.h"
/**
* _string - a function that reverses a string.
* @s: a parameter
*/
void rev_string(char *s)
{
char tmp;
int i, length1, length2;
length = 0;
length = 0;
while (s[length1] != '\0')
length1++;
length2 = length1 - 1;
for (i = 0; i < length1 / 2; i++)
{
tmp = s[i];
s[i] = s[length2];
s[length2] = tmp;
length -= 1;
}
}