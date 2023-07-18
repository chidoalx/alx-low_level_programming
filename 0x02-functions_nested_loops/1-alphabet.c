#include <stdio.h>
#include "main.h"
/**
 * main - the main function
 * putchar - function to print
 * for - functions of addition
 * Return: Description of the returned value
 */
void print_alphabet(void)
{
char letter;
for (letter = 'a'; letter <= 'z'; letter++)
{
_putchar(letter);
}
_putchar('\n');
}
