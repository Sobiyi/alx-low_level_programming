#include "main.h"
#include <string.h>

char *find_power_mul(int n, char *s);
char *mul_digit(char *s, char digit);
char *add_numbers(char *n1, char *n2, int len1, int len2);

/**
 * main - multiplies two numbers
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: 0 if succesfull
 */
int main(int argc, char *argv[])
{
	char *r, mul, *res = "";

	int i, j, len;

	if (argc != 3)
	{
		printf("Error\n");
		exit(98);
	}

	for (i = 1; i < argc; i++)
	{
		len = strlen(argv[i]);

		for (j = 0; j < len; j++)
		{
			if (argv[i][j] < 48 || argv[i][j] > 57)
			{
				printf("Error\n");
				exit(98);
			}
		}
	}

	len = strlen(argv[1]);

	for (i = len, j = 0; i > 0; i--, j++)
	{
		r = find_power_mul(i, argv[2]);
		mul = mul_digit(r, argv[1][j]);

		if (strlen(res) == 0)
			res = mul;
		else
			res = add_numbers(res, mul, strlen(res), strlen(mul));
	}

	printf("%s\n", res);

	return (0);
}

/**
 * find_powwe_mul - finds how many zeros to add to a number and adds it
 * @n: number of zeros
 * @s: the string to add the zeros
 *
 * Return: a pointer to the result
 */
char *find_power_mul(int n, char *s)
{
	char *res;
	int i, len;

	len = strlen(s);

	res = malloc((n + len + 1) * sizeof(char));

	for (i = 0; i < len; i++)
		res[i] = s[i];
	for (i = 0; i < n - 1; i++)
		res[i + len] = '0';

	res[i + len] = '\0';

	return (res);
}

/**
 * mul_digit - multiplies a string by a digit
 * @s: the string
 * @digit: the digit
 *
 * Return: a pointer to the result
 */
char *mul_digit(char *s, char digit)
{
	char *res;
	static int d[150];
	int i, j, len, lenr, carry, num, temp;

	len = strlen(s);
	carry = 0;

	res = malloc((len + 2) * sizeof(char));

	for (i = len - 1; i >= 0; i--)
	{
		temp = ((s[i] - 48) * (digit - 48)) + carry;

		if (temp > 10)
		{
			num = temp % 10;
			carry = temp / 10;
		}
		else
		{
			num = temp;
			carry = 0;
		}

		d[i] = num;
	}

	if (carry > 0)
		d[0] += (carry * 10);

	i = 0;
	j = 0;
	if (d[0] > 9)
	{
		res[1] = (d[0] % 10) + 48;
		res[0] = (d[0] / 10) + 48;
		j = 2;
		i = 1;
	}

	while (i < len)
	{
		res[j] = d[i] + 48;
		i++;
		j++;
	}
	lenr = strlen(res);
	res[lenr] = '\0';

	return (res);
}

/**
 * add_numbers - adds two strings
 * @n1: the second string
 * @n2: the second string
 * @len1: length of the first string
 * @len2: length of the second string
 *
 * Return: a pointer to the answer
 */
char *add_numbers(char *n1, char *n2, int len1, int len2)
{
	int i, j, k, l, num, rem = 0;
	static int d[150];
	char *res;

	res = malloc((len1 + 2) * sizeof(char));

	j = len2 - 1;
	k = len1 - len2 - 1;
	for (i = len1 - 1; i > k; i--)
	{
		num = rem + (n1[i] - 48) + (n2[j] - 48);
		if (num > 9)
		{
			num = num - 10;
			rem = 1;
		}
		else
		{
			rem = 0;
		}
		d[i] = num;
		j--;
	}
	for (l = i; l >= 0; l--)
	{
		num = rem + n1[l] - 48;
		if (num > 9)
		{
			num = num - 10;
			rem = 1;
		}
		else
		{
			rem = 0;
		}
		d[l] = num;
	}
	if (rem == 1)
		d[0] += 10;
	i = 0;
	j = 0;
	if (d[0] > 9)
	{
		res[1] = (d[0] % 10) + 48;
		res[0] = 49;
		j = 2;
		i = 1;
	}
	while (i < len1)
	{
		res[j] = d[i] + 48;
		i++;
		j++;
	}
	res[i + 1] = '\0';

	return (res);
}
