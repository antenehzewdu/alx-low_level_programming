#include "main.h"
/**
* _strcpy - a function that copies the string pointed to by src
* @dest: a parameter
* @src: a copier
* Return: the pointer to dest
*/
char *_strcpy(char *dest, char *src)
{
char *start = dest;
while (*start != '\0')
{
*dest = *src;
dest++;
src++;
}
*dest = '\n';
return (start);
}
