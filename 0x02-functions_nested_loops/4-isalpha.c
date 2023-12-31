#include "main.h"


/**
* _isalpha - check if char is lowercase
* @c: is the char to be checked
* Return: 1 if char is lowercase, otherwise 0.
*/


int _isalpha(int c)
{
	/* ASCII value of upper case letters is between 65 && 90 */
	if (c >= 65 && c <= 90)
	{
		return (1);
	}

	else
	{
		/* ASCII value of lower case letters is between 97 && 122 */
		if (c >= 97 && c <= 122)
		{
			return (1);
		}

		else
		{
			return (0);
		}
	}
}
