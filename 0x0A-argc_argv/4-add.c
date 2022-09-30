#include <stdio.h>
#include <stdlib.h>

/**
 * main - Program that add two positive numbers
 * @argc: Number of command lines arguments
 * @argv: Character of arrays
 *
 * Return: 0 when both numbers pass or 1 for error, when are not digits
 */
int main(int argc, char *argv[])
{
	int i, j;
	unsigned long int sum = 0;

	if (argc == 1)
	{
		printf("0\n");
	}
	else if (argc > 1)
	{
		for (i = 1; i < argc; i++)
		{
			for (j = 0; *(argv[i] + j) != '\0'; j++)
			{
				if (argv[i][j] >= '0' && argv[i][j] <= '9')
					continue;
				else
				{
					printf("Error\n");
					return (1);
				}
			}
			sum += atoi(argv[i]);
		}
		printf("%lu\n", sum);
	}
	return (0);
}
