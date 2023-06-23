#include "main.h"
/**
 * print_triangle - print a triangle
 *
 * Return: nul.
 * @size: size of triangle
 */
void print_triangle(int size)
{
	if (size > 0)
	{
		int j, m = 1, i = size, ii;

		while (m < (size + 1))
		{
			ii = i;
			while (ii > 1)
			{
				_putchar(32);
				ii--;
			}
			for (j = 0; j < m; j++)
			{
				_putchar(35);
			}
			i--;
			m++;
			if (m != (size + 1))
				_putchar('\n');
		}
	}
	_putchar('\n');
}
