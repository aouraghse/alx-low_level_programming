#include "main.h"
/**
 * rev_string - rev.
 *
 * Return : null.
 * @s: parameter
 */
void rev_string(char *s)
{
	char j = s[0];
	int c = 0, i;

	while (s[c] != 0)
	c++;
	for (i = 0; i < c; i++)
	{
		c--;
		j = s[i];
		s[i] = s[c];
		s[c] = j;
	}
}
