#include "main.h"
/**
 * _puts - prints a string followd by new line.
 *
 * @str: parameter
 */
void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str++);
	}
		_putchar('\n');
}
