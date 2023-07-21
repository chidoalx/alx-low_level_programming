#include"main.h"
#include <stdio.h>
/**
 * print_diagonal - print a diagonal line
 * @n: is the number of times the \ character
 * should be printed
*/
void print_diagonal(int n)
{
int postn, space;
if (n <= 0)
{
printf("\\n\n");
}
else
{
for (postn = 1; postn <= n; ++postn)
{
for (space = 1; space <= postn; ++space)
{
printf(" ");
}
printf("\\");
printf("\n");
}
}
}
