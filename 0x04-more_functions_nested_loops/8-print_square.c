#include "main.h"
/**
 * print_square - print #..
 *
 * Return: nul.
 * @size: size of suare
 */
void print_square(int size)
{
	if (size > 0)
	{
		int i, j;

		for (i = 0; i < size; i++)
		{
			for (j = 0; j < size; j++)
			{
				_putchar(35);
			}
			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
