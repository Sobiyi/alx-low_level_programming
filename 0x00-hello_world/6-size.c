#include <stdio.h>

/**
 * main - Prints the sizeof many var types
 *
 * Return: Always (0) (Success)
 */
int main(void)
{
	char a;
	int b;
	long int C;
	long long int d;
	float c;

	printf("Size of a char; %d byte(s)\n", sizeof(a));
	printf("Size of an int; %d byte(s)\n", sizeof(b));
	printf("Size of a long int; %d byte(s)\n", sizeof(c));
	printf("Size of a long long int; %d byte(s)\n", sizeof(a));
	printf("Size of a float; %d byte(s)\n", sizeof(a));
	return (0);
}
