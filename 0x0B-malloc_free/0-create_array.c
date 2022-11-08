#include "main.h"

/**
 * create_array - creates an array of chars and initializes it
 * with a specific char
 * @size: the size of the array
 * @c: the character to initialize with
 *
 * Return: NULL if size is zero or fails to allocate and
 * a pointer to the array if successful
 */
char *create_array(unsigned int size, char c)
{
	char *arr;
	unsigned int i;

	if (size == 0)
		return (NULL);

	arr = malloc(size * sizeof(char));

	if (arr == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		arr[i] = c;

	return (arr);
}
