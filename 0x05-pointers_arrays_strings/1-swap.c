#include "main.h"
/**
 * swap_int - swap value.
 *
 * Return : null.
 * @a: parameter
 * @b: parameter
 */
void swap_int(int *a, int *b)
{
	int k;

	k = *a;
	*a = *b;
	*b = k;
}
