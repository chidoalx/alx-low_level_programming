#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - the main function
 * if_else - it's a function For comparison
 * Return: Description of the returned value
 */
int main(void)
{
srand(time(0));
int a = rand() - RAND_MAX / 2;
if (a > 0)
{
printf("%d is positive\n", a);
}
else if (a == 0)
{
printf("%d is zero\n", a);
}
else
{
printf("%d is negative\n", a);
}
return (0);
}
