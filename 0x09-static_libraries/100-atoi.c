#include "main.h"
/**
 * _atoi - convert string.
 *
 * @s: string
 *
 * Return: Always 0
 */
int _atoi(char *s)
{
	int sign = 1, p = 0;
	unsigned int r = 0;

	while (!(s[p] <= '9' && s[p] >= '0') && s[p] != '\0')
	{
		if (s[p] == '-')
			sign *= -1;
		p++;
	}
	while (s[p] <= '9' && (s[p] >= '0' && s[p] != '\0'))
	{
		r = (r * 10) + (s[p] - '0');
		p++;
	}
	r *= sign;
	return (r);
}
