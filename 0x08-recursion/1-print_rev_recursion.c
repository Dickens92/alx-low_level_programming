#include "main.h"
/**
 * _print_rev_recursion - A funtion that prints a string in reverse.
 * @s: The string for printing in the code.
 */
void _print_rev_recursion(char *s)
{
	if (*s)
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
