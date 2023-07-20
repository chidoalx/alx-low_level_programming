#include "main.h"
#include <stdio.h>
/**
 *print_line - prints the line
 *Return: product.
 */
void print_line(int n)
{
int i ;
if (n > 0)
{
for (i = 0; i <= n; i++)
{
printf("_");
}
printf("\n");
}
else
{
printf("\n");
}
}
