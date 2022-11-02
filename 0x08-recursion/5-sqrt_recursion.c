#include "main.h"

int find_sqrt(int n, int i);

/**
 * _sqrt_recursion - finds the square root of a number
 * @n: the number
 *
 * Return: natural square root or -1
 */
int _sqrt_recursion(int n)
{
	return (find_sqrt(n, 0));
}

/**
 * find_sqrt - finds the square root of a number
 * @n: the number
 * @i: find
 *
 * Return: natural square root or -1
 */
int find_sqrt(int n, int i)
{
	if (i * i == n)
		return (i);
	else if (i * i > n)
		return (-1);
	else
		return (find_sqrt(n, i + 1));
}
