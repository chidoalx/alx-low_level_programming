#include <stdio.h>
/**
 * main - the main function
 * printf - function to print
 * if_else - functions of comparison
 * Return: Description of the returned value
 */
int main(void)
{
char letter = 'a';
while (letter <= 'z')
{
if (letter != 'q' && letter != 'e')
{
putchar(letter);
}
letter++;
}
putchar('\n');
return (0);
}
