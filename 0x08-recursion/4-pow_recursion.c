#include "main.h"

/**
 * _pow_recursion - A function meant to return x value  raised to the power of y
 * @x: value to riase to power y
 * @y: power
 *
 * Return: result of the power
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	return (x * _pow_recursion(x, y - 1));
}
