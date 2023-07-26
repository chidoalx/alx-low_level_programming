#include "main.h"
/**
 * _strncat - a function that concatenates two strings.
 * @dest: pointer to destination input
 * @src: pointer to source input
 * @n: most number of bytes from @src
 * Return: @dest
*/
char *_strncat(char *dest, char *src, int n)
{
char *dest_ptr = dest;
/* Move the destination pointer to the end of the string*/
while (*dest_ptr != '\0')
{
dest_ptr++;
}
/* Copy at most n bytes from src to dest*/
while (*src != '\0' && n > 0)
{
*dest_ptr = *src;
dest_ptr++;
src++;
n--;
}
/* Null-terminate the concatenated string*/
*dest_ptr = '\0';
return (dest);
}
