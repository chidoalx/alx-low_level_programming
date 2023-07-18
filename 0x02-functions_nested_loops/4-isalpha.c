#include "main.h"
/**
 * _isalpha - Checks for lowercase alphabet or uppercase
 * @c: Character to be checked
 * Return: if character is lowercase, otherwise
 */
int _isalpha(int c)
{
if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
{
return (1);
}
else
{
return (0);
}
}
