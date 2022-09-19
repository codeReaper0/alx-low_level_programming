#include "main.h"

/**
 * void swap_int(int *a, int *b) - swaps the values of two integers
 * @a: first integer
 * @b: second integer
 * Tella Boluwatife - Author
 * Return: Always 0.
 */

void swap_int(int *a, int *b)
{
	int n;
	n = *a;
	*b = *a;
	*a = n;
}
