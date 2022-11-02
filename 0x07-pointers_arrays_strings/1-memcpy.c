#include "main.h"
#include <string.h>

/**
 * _memcpy - copies n bytes from memory area src to memory
 * area dest
 * @dest: src to copy to
 * @src: src to copy from
 * @n: bytes to copy
 *
 * Return: a pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	char *s = memcpy(dest, src, n);

	return (s);
}
