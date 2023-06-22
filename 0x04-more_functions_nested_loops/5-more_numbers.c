#include "main.h"
/**
 * more_numbers - print 10 timr from 0 to 14.
 *
 * Return: null.
 *
 */
void more_numbers(void)
{
	int i, j, jj;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 15; j++)
		{
			if (j > 9)
			{
				jj = j / 10;
				_putchar(jj + '0');
			}
			_putchar((j % 10) + '0');
		}
		_putchar('\n');
	}
}
