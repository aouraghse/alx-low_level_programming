#include "main.h"
/**
 * print_diagonal - line diagonal.
 *
 * Return: null.
 * @n: numbre of _.
 */

void print_diagonal(int n)
{
	if (n > 0)
	{
		int j, m = 1;

		while (m < (n + 1))
		{
			for (j = 0; j < m; j++)
			{
				if (j == (m - 1))
					_putchar('\\');
				else
					_putchar(' ');
			}
			m++;
			if (m != (n + 1))
				_putchar('\n');
		}
	}
	_putchar('\n');
}
