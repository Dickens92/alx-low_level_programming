#include "main.h"
/**
 * _strlen_recursion -A function that returns string's length.
 * @s: The exact string under measurement.
 *
 * Return: The String's length.
 */
int _strlen_recursion(char *s)
{
	int slength = 0;

	if (*s)
	{
		slength++;
		slength += _strlen_recursion(s + 1);
	}

	return (slength);
}
