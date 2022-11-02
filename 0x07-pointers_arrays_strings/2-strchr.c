#include "main.h"
#include <string.h>

/**
 * _strchr - locates a character in a string
 * @s: pointer to the string
 * @c: character to be located
 *
 * Return: a pointer to the first occurence of the character in
 * the string or NULL or NULL if character is not found
 */
char *_strchr(char *s, char c)
{
	char *v = strchr(s, c);

	return (v);
}
