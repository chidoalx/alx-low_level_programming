/**
 * swap_int - swaps to pointers
 * @n: int parameter
 *
 * Return: Nothing
 */

void swap_int(int *a, int *b)
{
int swap;
swap = *a;
*a = *b;
*b = swap;
}
