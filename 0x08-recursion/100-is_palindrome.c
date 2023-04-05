#include "main.h"

int check_mate(char *s, int i, int len);
int _strlen_recursion(char *s);

/**
 * is_palindrome - determines  if a string is a palindrome
 * @s: string to reverse
 *
 * Return: 1 if it is, 0 it's not
 */
int is_palindrome(char *s)
{
	if (*s == 0)
		return (1);
	return (check_mate(s, 0, _strlen_recursion(s)));
}

/**
 * _strlen_recursion - generates the length of a string
 * @s: string for calculating  the length of
 *
 * Return: length of the string
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + _strlen_recursion(s + 1));
}

/**
 * check_mate - checks the characters recursively for palindrome
 * @s: string to check
 * @i: iterator
 * @len: The string length
 *
 * Return: 1 if palindrome, 0 if not
 */
int check_mate(char *s, int i, int len)
{
	if (*(s + i) != *(s + len - 1))
		return (0);
	if (i >= len)
		return (1);
	return (check_mate(s, i + 1, len - 1));
}

