#include "function_pointers.h"
#include <stdlib.h>
#include <stdio.h>
#include "3-calc.h"
/**
 * main - Prints the result 
 * @argc: argument count.
 * @argv: Argument vector.
 *
 * Return: Always 0.
 */
int main(int __attribute__((__unused__)) argc, char *argv[])
{
	int numbs1, numbs2;
	char *op;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	numbs1 = atoi(argv[1]);
	op = argv[2];
	numbs2 = atoi(argv[3]);

	if (get_op_func(op) == NULL || op[1] != '\0')
	{
		printf("Error\n");
		exit(99);
	}

	if ((*op == '/' && numbs2 == 0) ||
	    (*op == '%' && numbs2 == 0))
	{
		printf("Error\n");
		exit(100);
	}

	printf("%d\n", get_op_func(op)(numbs1, numbs2));

	return (0);
}


