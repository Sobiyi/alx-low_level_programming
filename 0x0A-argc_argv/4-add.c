#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * main - adds numbers
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: 0 if successful and 1 if otherwise
 */
int main(int argc, char *argv[])
{
	int i, j, len, sum = 0;

	if (argc == 1)
	{
		printf("%d\n", sum);
	}
	else
	{
		for (i = 1; i < argc; i++)
		{
			len = strlen(argv[i]);

			for (j = 0; j < len; j++)
			{
				if (argv[i][j] < 48 || argv[i][j] > 57)
				{
					printf("Error\n");

					return (1);
				}
			}

			sum += atoi(argv[i]);
		}

		printf("%d\n", sum);
	}

	return (0);
}
