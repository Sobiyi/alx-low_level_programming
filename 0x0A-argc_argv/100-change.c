#include <stdio.h>
#include <stdlib.h>

int check_change(int amount);

/**
 * main - prints the minimum number of coins to make change
 * for an amount of money
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: 0 if succesful and 1 otherwise
 */
int main(int argc, char *argv[])
{
	int amount, count = 0;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		amount = atoi(argv[1]);

		if (amount < 0)
		{
			printf("%d\n", count);
		}
		else
		{
			count = check_change(amount);
			printf("%d\n", count);
		}

		return (0);
	}
}

/**
 * check_change - checks for the minum possible coins
 * @amount: amount to check
 *
 * Return: number of possible coins
 */
int check_change(int amount)
{
	int count = 0;

	while (amount != 0)
	{
		if (amount - 25 >= 0)
		{
			amount -= 25;
			count++;
		}
		else if (amount - 10 >= 0)
		{
			amount -= 10;
			count++;
		}
		else if (amount - 5 >= 0)
		{
			amount -= 5;
			count++;
		}
		else if (amount - 2 >= 0)
		{
			amount -= 2;
			count++;
		}
		else
		{
			amount -= 1;
			count++;
		}
	}

	return (count);
}
