#include <stdio.h>
#include "main.h"

/**
 * _atoi - a function that converts a string to an integer
 * @s: string to be converted
 *
 * Return: the int converted 
 */
int _atoi(char *s)
{
	int i, j, k, span, f, figure;

	i = 0;
	j = 0;
	k = 0;
	span = 0;
	f = 0;
	figure = 0;

	while (s[span] != '\0')
		span++;

	while (i < span && f == 0)
	{
		if (s[i] == '-')
			++j;

		if (s[i] >= '0' && s[i] <= '9')
		{
			figure = s[i] - '0';
			if (d % 2)
				figure = -figure;
			k = k * 10 + figure;
			f = 1;
			if (s[i + 1] < '0' || s[i + 1] > '9')
				break;
			f = 0;
		}
		i++;
	}

	if (f == 0)
		return (0);

	return (k);
}

/**
 * main - multiplies two numbers
 * @argc: arguments count
 * @argv: arguments vector
 *
 * Return: 0 (Success), 1 (Error)
 */
int main(int argc, char *argv[])
{
	int result, numeral1, numeral2;

	if (argc < 3 || argc > 3)
	{
		printf("Error\n");
		return (1);
	}

	numeral1 = _atoi(argv[1]);
	numeral2 = _atoi(argv[2]);
	result = numeral1 * numeral2;

	printf("%d\n", result);

	return (0);
}


