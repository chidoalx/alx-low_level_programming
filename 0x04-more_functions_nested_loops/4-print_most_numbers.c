#include"main.h"
#include <stdio.h>
/**
 * print_most_numbers - my function
 * 10 starting from 0, followed by a new line
 * Return: Always 0 (Success)
 */
void print_most_numbers(void)
{
int n;
for (n = 0; n < 10; n++)
{
if (n == 2 || n == 4)
{
continue;
}
printf("%d", n);
}
printf("\n");
}
