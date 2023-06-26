#include "main.h"
/**
 * puts2 - rev.
 *
 * Return : null.
 * @str: parameter
 */
void puts2(char *str)
{
	int i = 0, j = 0, k;
	char *m = str;

	while (*m != 0)
	{
		m++;
		i++;
	}
	j = i - 1;
	for (k = 0 ; k <= j ; k++)
	{
		if (k % 2 == 0)
	{
		_putchar(str[k]);
	}
	}
	_putchar('\n');
}
