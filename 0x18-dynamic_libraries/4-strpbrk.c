#include "main.h"
/**
 * Function locates the first occurrence in the string s of any of the bytes in the string accept
 * Return: Always 0 (Success)
 */
char *_strpbrk(char *s, char *accept)
{
	int k;

	while (*s)
	{
		for (k = 0; accept[k]; k++)
		{
		if (*s == accept[k])
		return (s);
		}
	s++;
	}
	return ('\0');
}
