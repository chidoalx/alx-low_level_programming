#include "main.h"
/**
 * _strncpy - A function that copies a string.
 * @dest: pointer to destination input buffer
 * @src: pointer to source input buffer
 * @n: bytes of @src
 * Return: @dest
*/
char *_strncpy(char *dest, char *src, int n)
{
char *dest_ptr = dest;
/* Copy at most n characters from src to dest*/
while (*src != '\0' && n > 0)
{
*dest_ptr = *src;
dest_ptr++;
src++;
n--;
}
while (n > 0)
{
*dest_ptr = '\0';
dest_ptr++;
n--;
}
return (dest);
}
