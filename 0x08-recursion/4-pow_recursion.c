#include "main.h"

/**
 * _pow_recursion - returns value of x raised
 * @x: the first number
 * @y: second number
 *
 * Return: x raised to power of y
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);

	return (x * _pow_recursion(x, y - 1));
}
