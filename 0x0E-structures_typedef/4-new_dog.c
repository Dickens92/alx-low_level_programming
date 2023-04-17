#include <stdlib.h>
	#include "dog.h"


	/**
	 * _strlen - returns string length
	 * @s: string to evaluate
	 *
	 * Return: the string length 
	 */
	int _strlen(char *s)
	{
		int i;


		i = 0;


		while (s[i] != '\0')
		{
			i++;
		}


		return (i);
	}

