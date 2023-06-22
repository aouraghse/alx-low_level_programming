#include "main.h"
/**
* _isupper - check for uppercase.
*
* Return: c is upper return 1 otherwise return 0.
* @c: the caracter checked
*/
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
