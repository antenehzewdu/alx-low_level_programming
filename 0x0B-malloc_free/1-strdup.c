#include "main.h"
/**
* _strdup - a duplicate of the string str
* @str: a string to be duplicated
* Return: a string pointer
*/
char *_strdup(char *str)
{
unsigned int i, j;
char *s;
if (str == NULL)
return (NULL);
while (str[i])
i++;
s = malloc(sizeof(char) * (i + 1));
if (s == NULL)
return (NULL);
while (j < i)
{
s[j] = str[j];
j++;
}
s[j] = '\0';
return (s);
}
