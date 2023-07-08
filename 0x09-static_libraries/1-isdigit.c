#include "main.h"
/**
 * _isdigit - check for a digit.
 *
 * Return: c is digit return 1 otherwise return 0.
 * @c: the caracter checked
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}
