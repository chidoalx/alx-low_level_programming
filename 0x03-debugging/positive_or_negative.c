#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include "0-main.c"
#include "main.h"
/**
 * positive_or_negative - myfunction
 * printf - function to print
 * if_else - functions of comparison
 * Return: Description of the returned value
 */
int main ()
{
int n;
srand(time(0));
n = rand() - RAND_MAX / 2;
if (n > 0)
{
printf("%i is positive\n", n);
}
else if (n == 0)
{printf("%i is zero\n", n);
}else
{
printf("%i is negative\n", n);
}
return (0);
}
