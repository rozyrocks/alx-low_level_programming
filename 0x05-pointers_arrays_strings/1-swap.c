#include "main.h"
/**
 * swap_int - swaps the values of two integers
 * @a: parameter one
 * @b: parameter two
 */
void swap_int(int *a, int *b)
{
	int tmp = *a;
	*a = *b;
	*b = tmp;
}
