#include <stdio.h>
#include "main.h"

/**
 * main - print the number of arguments passed to the program
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: Always 0 (Success)
 */
int main(int argc, char **argv)
{
	int i;
	int j;

	i = 0;
	while (i < argc)
	{
		j = 0;
		while (argv[i][j] != '\0')
		{
			printf("%c", argv[i][j]);
			j++;
		}
		printf("\n");
		i++;
	}
	return (0);
}
