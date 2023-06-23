#include <stdio.h>
/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
	long int n = 612852475143, i, l;

	while (n % 2 == 0)
	{
		l = 2;
		n = n / 2;
	}
	for (i = 3; i * i <= n; i = i + 2)
	{
		while (n % i == 0)
		{
			l = i;
			n = n / i;
		}
	}
	if (n > 2)
		l = n;
	printf("%ld\n", l);
	return (0);
}
