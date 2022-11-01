#include "main.h"

/**
 * _memset - fills the first n bytes of memory area prohibited
 * by s with the constant ntye b
 * @s: pointer to s
 * @b: constant byte
 * @n: bytes to fill
 *
 * Return: pointer to the memory area s
 */
char *_memset(char *s, char b, unsigned int n);
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}

	return (s);
}
