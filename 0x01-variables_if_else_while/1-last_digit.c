#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - the main function
 * printf - function to print
 * if_else - functions of comparison
 * Return: Description of the returned value
 */
int main(void)
{
int n;
int last_Digit;
srand(time(0));
n = rand() - RAND_MAX / 2;
last_Digit = n % 10;
if (last_Digit > 5)
{
printf("Last digit of %d is %d and is greater than 5 and not 0\n", n, last_Digit);
}
else if (last_Digit == 0)
{
printf("Last digit of %d is %d and is 0\n", n, last_Digit);
}
else
{
printf("Last digit of %d is %d and is less than 6 and not 0\n", n, last_Digit);
}
return (0);
}
