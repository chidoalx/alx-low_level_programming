#include "main.h"

/**
 * _strlen_recursion - size
 * @s: pointer to string params
 * Return: recursion
 */

int _strlen_recursion(char *s)
{
int i;
for (i = 0; s[i] != '\0'; ++i);
return (i);
}
