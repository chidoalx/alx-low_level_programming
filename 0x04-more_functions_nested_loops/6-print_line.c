#include "main.h"
#include <stdio.h>
/**
 * print_line - print a straight line
 *
 * @n: is the number of times the _ character
 *     should be printed
*/
void print_line(int n)
{
	int lnChr;

	if (n <= 0)
		printf("\n");
	else
	{
		for (lnChr = 1; lnChr <= n; ++lnChr)
			printf("_");
		printf("\n");
	}
}
