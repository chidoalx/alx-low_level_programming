#include <stdio.h>
/**
 * main - the main function
 * putchar - function to print
 * for - functions of addition
 * Return: Description of the returned value
 */
int main(void)
{
char letter;
for (letter = 'a'; letter <= 'z'; letter++)
{
putchar(letter);
}
for (letter = 'A'; letter <= 'Z'; letter++)
{
putchar(letter);
}
putchar('\n');
return (0);
}
