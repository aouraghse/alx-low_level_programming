#include "main.h"
/**
 * print_line - line by __.
 *
 * Return: null.
 * @n: numbre of _
 *
 */
void print_line(int n)
{
	if (n > 0)
	{
		int i;

		for (i = 0; i < n; i++)
		{
			_putchar(95);
		}
	}
	_putchar('\n');
}
