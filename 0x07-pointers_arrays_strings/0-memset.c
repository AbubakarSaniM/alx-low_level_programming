#include "main.h"

/**
 * _memset - ok
 * @n: ok
 * @s: ok
 * @b: ok
 * Return: a piontrer
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		s[i] = b;
		i++;
	}
	return (s);
}
