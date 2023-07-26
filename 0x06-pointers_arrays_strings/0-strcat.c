#include "main.h"
/**
 * _strcat - function that concatenates
 *          two strings.
 * @dest: pointer to destnation input
 * @src: pointer to source input
 * Return: pointer to resulting string @dest
*/
char *_strcat(char *dest, char *src)
{
/* Create a pointer 'ptr' and set it to the beginning of the 'dest' string.*/
char *ptr = dest;
/* Find the end of the 'dest' string.*/
while (*ptr != '\0')
{
ptr++;
}
/* Append the 'src' string to the end of the 'dest' string.*/
while (*src != '\0')
{
/* Copy the character from 'src' to 'dest'*/
*ptr = *src;
/* Move 'ptr' to the next position in 'dest'*/
ptr++;
/* Move 'src' to the next character in the 'src' string*/
src++;
}
/* Add a terminating null byte at the end of the concatenated string.*/
*ptr = '\0';
/* Return a pointer to the resulting concatenated string (i.e., 'dest').*/
return (dest);
}
