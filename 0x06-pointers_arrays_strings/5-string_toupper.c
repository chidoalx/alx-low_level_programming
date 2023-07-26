#include "main.h"
/**
 * string_toupper - a function that changes all
 *             lowercase letters of a string
 *             to uppercase.
 * @s : pointer to input char
 * Return: @s
*/
char *string_toupper(char *s)
{
while (*s != '\0')
{
if (*s >= 'a' && *s <= 'z')
{
*s = *s - ('a' - 'A');
}
s++;
}
return (s);
}
